//
// Created by Tere Solano on 14/8/2020.
//
#ifndef LAB03_UML_RELATIONSHIPS_LIONS_CHOFER_H
#define LAB03_UML_RELATIONSHIPS_LIONS_CHOFER_H
#include <iostream>
#include <sstream>
using namespace std;

class Chofer {
private:
    string name;
    string id;

public:
    Chofer(const string &name, const string &id);
    const string &getName() const;
    void setName(const string &name);
    const string &getId() const;
    void setId(const string &id);
    virtual ~Chofer();
    string toString();
};

#endif //LAB03_UML_RELATIONSHIPS_LIONS_CHOFER_H
