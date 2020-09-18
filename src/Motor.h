//
// Created by Usuario on 14/8/2020.
//

#ifndef BASIC_00_EXAMPLE_MOTOR_H
#define BASIC_00_EXAMPLE_MOTOR_H
#include <iostream>
#include <sstream>
using namespace std;


class Motor {

private:
    int model;
    int velocidad_Nominal;

public:

    Motor();

    Motor(int model, int velocidadNominal);

    int getModel() const;

    void setModel(int model);

    int getVelocidadNominal() const;

    void setVelocidadNominal(int velocidadNominal);

    string toString();


};


#endif //BASIC_00_EXAMPLE_MOTOR_H
