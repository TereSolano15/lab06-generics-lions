//
// Created by Maikol Guzman on 8/2/20.
//
#include <sstream>
#include <iomanip>
#include "Administrative.h"

Administrative::Administrative() {}

Administrative::Administrative(double monthlySalary) : monthlySalary(monthlySalary) {}

Administrative::Administrative(const string &firstName, const string &lastName, int documentld, double monthlySalary)
:Person(firstName, lastName, documentld), monthlySalary(monthlySalary) {}

double Administrative::getMonthlySalary() const {
    return monthlySalary;
}

void Administrative::setMonthlySalary(double monthlySalary) {
    Administrative::monthlySalary = monthlySalary;
}

double Administrative::salary(){
 return monthlySalary;
}
string Administrative::toString(){
  stringstream s;
  s<<Person::toString();
  s<<" Salary: "<< monthlySalary<<endl;
  return s.str();
}




