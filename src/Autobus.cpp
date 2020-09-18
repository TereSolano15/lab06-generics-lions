#include "Autobus.h"

Autobus::Autobus(int cilindrada, int modelo, int numeroPasajeros, const string &tipoCombustible) : Carro(cilindrada,
                                                                                                         modelo,
                                                                                                         numeroPasajeros,
                                                                                                         tipoCombustible) {}

Autobus::Autobus(int cilindrada, int modelo, int numeroPasajeros, const string &tipoCombustible,
                 const string &tipoPermiso) : Carro(cilindrada, modelo, numeroPasajeros, tipoCombustible),
                                              tipoPermiso(tipoPermiso) {}

const string &Autobus::getTipoPermiso() const {
    return tipoPermiso;
}

void Autobus::setTipoPermiso(const string &tipoPermiso) {
    Autobus::tipoPermiso = tipoPermiso;
}

Autobus::~Autobus() {

}
