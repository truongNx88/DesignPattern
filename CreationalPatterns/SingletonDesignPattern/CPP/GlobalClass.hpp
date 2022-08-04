class GlobalClass
{
private:
    int m_value;
    GlobalClass(int v = 0) {
        m_value = v;
    };
    static GlobalClass *s_intance;
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
            s_intance = new GlobalClass;
        }
        return s_intance;
    } 
};

GlobalClass* GlobalClass::s_intance = 0;
