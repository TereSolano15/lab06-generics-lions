#pragma once
#include<iostream>
#include<sstream>
#include"Carro.h"
using namespace std;

class Autobus : public Carro
{
private:
	string tipoPermiso;

public:
    virtual ~Autobus();

    Autobus(int cilindrada, int modelo, int numeroPasajeros, const string &tipoCombustible);

    Autobus(int cilindrada, int modelo, int numeroPasajeros, const string &tipoCombustible, const string &tipoPermiso);

    const string &getTipoPermiso() const;

    void setTipoPermiso(const string &tipoPermiso);
};