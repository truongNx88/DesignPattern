#ifndef DistrWorkPackage_hpp
#define DistrWorkPackage_hpp

#include <iostream>
#include <string.h>

enum PersistenceType {
    File,
    Queue,
    Pathway
};

struct PersistenceAttribute {
    PersistenceType type;
    char value[30];
};


class DistrWorkPackage {
private:
    char _desc[200], _temp[80];
public:
    DistrWorkPackage(char* type) {
        sprintf(_desc, "Distributed Work Package for: %s", type);
    }

    void setFile(char* f, char* v) {
        sprintf(_temp, "\n  File(%s): %s", f, v);
        strcat(_desc, _temp);
    }

    void setQueue(char *q, char *v) {
        sprintf(_temp, "\n  Queue(%s): %s", q, v);
        strcat(_desc, _temp);
    }

    void setPathway(char *p, char *v) {
        sprintf(_temp, "\n  Pathway(%s): %s", p, v);
        strcat(_desc, _temp);
    }
    const char *getState() {
        return _desc;
    }
};
#endif
