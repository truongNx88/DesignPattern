#ifndef Database_hpp
#define Database_hpp

#include "ISubject.hpp"
#include <vector>
#include <bits/stdc++.h>

class Database : public ISubject {
private:
    std::vector<IObserver*> mObservers;
    std::string mOperator;
    std::string mRecord;
public:
    Database():ISubject() {}
    
    void registerObserver(IObserver* obServer) {
        mObservers.push_back(obServer);
    }

    void removeObserver(IObserver* obServer){
        auto o = std::find(mObservers.begin(), mObservers.end(), obServer);
        if (o != mObservers.end()) {
            mObservers.erase(o , o + 1);
        }
    }

    void notifyObserver() {
        for (auto& obServer : mObservers) {
            obServer->update(mOperator, mRecord);
        }
        
    }

    void editRecord(std::string mOperator, std::string mRecord) {
        this->mOperator = mOperator;
        this->mRecord = mRecord;
        notifyObserver();
    }


};
#endif