#pragma once

#include <mutex>

class GlobalClass {
private:
    int m_value;
    GlobalClass(int v = 0) {
        m_value = v;
    };
    static GlobalClass *s_intance;
    static std::mutex mtx;
public:
    ~GlobalClass();
    int get_value() {
        return m_value;
    }
    void set_value(int v) {
        m_value = v;
    }

    static GlobalClass* instance() {
        if (s_intance == nullptr) {
            mtx.lock();
            s_intance = new GlobalClass;
            mtx.unlock();
        }
        return s_intance;
    } 
};

GlobalClass* GlobalClass::s_intance = 0;
std::mutex GlobalClass::mtx;
