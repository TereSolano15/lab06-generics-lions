//
// Created by Maikol Guzman on 8/2/20.
//

#ifndef LAB02_OOP_PROFESSOR_H
#define LAB02_OOP_PROFESSOR_H
#include "Person.h"

class Professor: public Person {

  private:

  double monthlySalary;
  double commissionRate;

  public:
    Professor();
    Professor(double monthlySalary, double commissionRate);
    Professor(const string &firstName, const string &lastName, int documentld, double monthlySalary, double commissionRate);

    double getMonthlySalary() const;

    void setMonthlySalary(double monthlySalary);

    double getCommissionRate() const;

    void setCommissionRate(double commissionRate);

    double salary();
    string toString();
  


};

#endif //LAB02_OOP_PROFESSOR_H
