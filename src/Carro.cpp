//
// Created by Tere Solano on 14/8/2020.
//

#include "Carro.h"

Carro::Carro(int cilindrada, int modelo, int numeroPasajeros, const string &tipoCombustible)
: cilindrada(cilindrada),modelo(modelo), numeroPasajeros(numeroPasajeros),tipoCombustible(tipoCombustible) {}

Carro::~Carro() {

}

int Carro::getCilindrada() const {
    return cilindrada;
}

void Carro::setCilindrada(int cilindrada) {
    Carro::cilindrada = cilindrada;
}

int Carro::getModelo() const {
    return modelo;
}

void Carro::setModelo(int modelo) {
    Carro::modelo = modelo;
}

int Carro::getNumeroPasajeros() const {
    return numeroPasajeros;
}

void Carro::setNumeroPasajeros(int numeroPasajeros) {
    Carro::numeroPasajeros = numeroPasajeros;
}

const string &Carro::getTipoCombustible() const {
    return tipoCombustible;
}

void Carro::setTipoCombustible(const string &tipoCombustible) {
    Carro::tipoCombustible = tipoCombustible;
}
string Carro::toString() {
    stringstream s;
    s<<motor->toString()<<endl;
    s<<"Modelo: "<<getModelo()<<endl;
    s<<"Numero de pasajeros: "<<getNumeroPasajeros()<<endl;
    s<<"Cilindrada: "<<getCilindrada()<<endl;
    s<<"Tipo de combustible: "<<getTipoCombustible()<<endl;
    return s.str();
}

Chofer *Carro::getChofer() const {
    return chofer;
}

void Carro::setChofer(Chofer *chofer) {
    Carro::chofer = chofer;
}
