//
// Created by Maikol Guzman on 8/24/20.
//

#ifndef LAB05_DEPENDENCY_INVERSION_SOLUTION_CASHSENDER_H
#define LAB05_DEPENDENCY_INVERSION_SOLUTION_CASHSENDER_H


#include "IPaymentSender.h"
#include <iostream>
using namespace std;
#include <type_traits>

class CashSender : public IPaymentSender <string>{
    std::string sendPayment() const {
            return "Give the money in the hands";
    }
};



#endif //LAB05_DEPENDENCY_INVERSION_SOLUTION_CASHSENDER_H
