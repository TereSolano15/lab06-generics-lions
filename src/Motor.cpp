//
// Created by Usuario on 14/8/2020.
//

#include "Motor.h"


Motor::Motor() {}

Motor::Motor(int model, int velocidadNominal) : model(model), velocidad_Nominal(velocidadNominal) {}

int Motor::getModel() const {
    return model;
}

void Motor::setModel(int model) {
    Motor::model = model;
}

int Motor::getVelocidadNominal() const {
    return velocidad_Nominal;
}

void Motor::setVelocidadNominal(int velocidadNominal) {
    velocidad_Nominal = velocidadNominal;
}

string Motor::toString() {

    stringstream s;

    s<<"\t modelo del motor: " <<model<<endl;
    s<<"\t Revoluciones del motor: "<<velocidad_Nominal;

    return s.str();
}
