//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include "University.h"

University::University(const string &name, Professor *professor, Administrative *administrative,
 const vector<Professor> &professorList, const vector<Administrative> &administrativeList) 
 :name(name), professor(professor), administrative(administrative), professorList(professorList), administrativeList(
  administrativeList) {}

University::University(const string &name) : name(name) {}

University::University() {}

University::~University() {

}

template<class T>
const string T University::getName() const {
    return data;
}



Professor *University::getProfessor() const {
    return professor;
}

void University::setProfessor(Professor *professor) {
    University::professor = professor;
}

Administrative *University::getAdministrative() const {
    return administrative;
}

void University::setAdministrative(Administrative *administrative) {
    University::administrative = administrative;
}

const vector<Professor> University::getListProfessor() {
    vector<Professor> professorListReturn;

    for (int cont = 0; cont < professorList.size(); cont++) {
        professorListReturn.push_back(professorList[cont]);
    }

    return professorList;
}

template<class T>
void University::insert(T* dato){
    push_back(dato);
}


