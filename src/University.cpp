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
    return data;
}

template<class T>
void University<T>::insert(T* data){
    push_back(data);
}


