#ifndef LAB02_OOP_UNIVERSITY_H
#define LAB02_OOP_UNIVERSITY_H

#include <vector>
#include "Professor.h"
#include "Administrative.h"
template<class T>
class University {
private:

    vector<T> lista;

public:
    University();
    virtual ~University();
    const string &getData() const;
    void insert(T*);



};


#endif //LAB02_OOP_UNIVERSITY_H
