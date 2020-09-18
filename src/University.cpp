//
// Created by Maikol Guzman on 8/2/20.
//

#include <sstream>
#include "University.h"

template <class T>
University<T>::University() {

}

template <class T>
University<T>::~University() {

}
template <class T>
const string &University<T>::getData() const {
    return lista;
}

template<class T>
string University<T>::agregar(T* data){
    push_back(data);
    return "Agregado";
}


