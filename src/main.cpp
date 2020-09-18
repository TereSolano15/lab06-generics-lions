//
// Created by Maikol Guzman on 8/2/20.
//

#include <iostream>
#include "Professor.h"
#include "Administrative.h"
#include "University.h"

int main() {

Professor p1("Mike", "Guzman", 123456789, 2000000.00, 0.05);

Professor p2("Pedro", "Sanchez", 1286608618, 1050000, 0.05);

Administrative a1("Marta","Rojas", 272923934, 800000);
Administrative a2("Andrea","Jaramillo", 272923933, 500000.00);

University university("sipah");
university.addProfessor(p1);
university.addProfessor(p2);
university.addAdministrative(a1);
university.addAdministrative(a2);

 vector<Professor> professorList = university.getListProfessor();
    for (int i = 0; i < professorList.size(); i ++) {
        cout << "Professor " << professorList[i].toString() << "\n";
    }
    cout << std::endl;

    vector<Administrative> administrativeList = university.getListAdministrative();
    for (int j = 0; j < administrativeList.size(); j ++) {
        cout << "Administrative " << administrativeList[j].toString() << "\n"; //mas cambios
    }
// hola
}
//hola este es cambio
