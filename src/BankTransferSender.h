//
// Created by Maikol Guzman on 8/24/20.
//

#ifndef LAB05_DEPENDENCY_INVERSION_SOLUTION_BANKTRANSFERSENDER_H
#define LAB05_DEPENDENCY_INVERSION_SOLUTION_BANKTRANSFERSENDER_H

#include <iostream>
using namespace std;
#include "IPaymentSender.h"
#include <type_traits>

class BankTransferSender : public IPaymentSender <string> {
public:
    std::string sendPayment() const{
        return "Sending the money by transference";
    }
};


#endif //LAB05_DEPENDENCY_INVERSION_SOLUTION_BANKTRANSFERSENDER_H
