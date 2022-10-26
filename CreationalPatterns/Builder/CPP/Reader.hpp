#ifndef Reader_hpp
#define Reader_hpp

#include "Builder.hpp"

class Reader {
private:
    Builder* _builder;
public:
    void setBuilder(Builder* b) {
        _builder = b;
    }

    void construct(PersistenceAttribute[], int);
};

void Reader::construct(PersistenceAttribute list[], int num) {
    for (int i = 0; i < num; i++)
    if (list[i].type == File)
      _builder->configureFile(list[i].value);
    else if (list[i].type == Queue)
      _builder->configureQueue(list[i].value);
    else if (list[i].type == Pathway)
      _builder->configurePathway(list[i].value);
}

#endif
