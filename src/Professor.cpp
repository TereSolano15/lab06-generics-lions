
// Created by Maikol Guzman on 8/2/20.

#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "Professor.h"

//constructors
Professor::Professor(const string &firstName, const string &lastName, int documentld, double monthlySalary,
                     double commissionRate) : Person(firstName, lastName, documentld), monthlySalary(monthlySalary),
                                              commissionRate(commissionRate) {}

Professor::Professor() {}

Professor::Professor(double monthlySalary, double commissionRate) : monthlySalary(monthlySalary),
                                                                    commissionRate(commissionRate) {}

//methods

double Professor::getMonthlySalary() const {
    return monthlySalary;
}

void Professor::setMonthlySalary(double monthlySalary) {
    Professor::monthlySalary = monthlySalary;
}

double Professor::getCommissionRate() const {
    return commissionRate;
}

void Professor::setCommissionRate(double commissionRate) {
    Professor::commissionRate = commissionRate;
}

double Professor::salary(){
    double sum;
    double aux = (monthlySalary*commissionRate)/100;
    sum = monthlySalary + aux;
    return sum;
}

string Professor::toString(){

    stringstream s;

    s<< Person::toString();
    s<< "monthly Salary: " << monthlySalary << endl;
    s<< "\t commission Rate: "<< commissionRate*100<< "%" << endl;
    s<< "\t new salary whith commission rate: " << salary()<<endl;

    return s.str();
}









