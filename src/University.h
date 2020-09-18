#ifndef LAB02_OOP_UNIVERSITY_H
#define LAB02_OOP_UNIVERSITY_H

#include <vector>
#include "Professor.h"
#include "Administrative.h"

class University {
private:
    string name;
    Professor* professor;
    Administrative* administrative;
    vector<Professor> professorList;
    vector<Administrative> administrativeList;

public:
    University(const string &name, Professor *professor, Administrative *administrative,
    const vector<Professor> &professorList, const vector<Administrative> &administrativeList);
    University(const string &name);
    University();
    virtual ~University();
    const string &getName() const;
    void setName(const string &name);
    Professor *getProfessor() const;
    void setProfessor(Professor *professor);
    Administrative *getAdministrative() const;
    void setAdministrative(Administrative *administrative);
    const vector<Professor> getListProfessor();
    template <class T>
    void insert(T*);



};


#endif //LAB02_OOP_UNIVERSITY_H
