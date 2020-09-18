//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PERSON_H
#define LAB02_OOP_PERSON_H


#include <string>
#include <ostream>
#include <iostream>
#include <sstream>
using namespace std;

/**
 * Abstract Class of Person
 */
class Person {
private:
    string firstName;
    string lastName;
    int documentld;

public:
    Person(const string &firstName, const string &lastName, int documentld);
    Person();
    virtual ~Person();

    const string &getFirstName() const;

    void setFirstName(const string &firstName);

    const string &getLastName() const;

    void setLastName(const string &lastName);

    int getDocumentld() const;

    void setDocumentld(int documentld);

    virtual double salary() = 0;
    virtual string toString();
};


#endif //LAB02_OOP_PERSON_H
