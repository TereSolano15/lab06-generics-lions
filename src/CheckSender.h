//
// Created by Maikol Guzman on 8/24/20.
//

#ifndef LAB05_DEPENDENCY_INVERSION_SOLUTION_CHECKSENDER_H
#define LAB05_DEPENDENCY_INVERSION_SOLUTION_CHECKSENDER_H

using namespace std;
#include <iostream>
#include "IPaymentSender.h"
#include <type_traits>

class CheckSender : public IPaymentSender <string> {

    template<class T>
    string sendPayment() const {
        return "Sending the check with the money";
    }
};


#endif //LAB05_DEPENDENCY_INVERSION_SOLUTION_CHECKSENDER_H
