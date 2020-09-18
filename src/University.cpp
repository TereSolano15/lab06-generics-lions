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

const string &University::getName() const {
    return name;
}

void University::setName(const string &name) {
    University::name = name;
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

void University::addProfessor(Professor pro){
  professorList.push_back(pro);
}

const vector<Administrative> University::getListAdministrative() {
    vector<Administrative> administrativeListReturn;

    for (int cont = 0; cont < administrativeList.size(); cont++) {
        administrativeListReturn.push_back(administrativeList[cont]);
    }

    return administrativeList;
}


void University::addAdministrative(Administrative admin) {
    administrativeList.push_back(admin);
}
