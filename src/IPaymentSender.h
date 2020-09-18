//
// Created by Maikol Guzman on 8/24/20.
//

#ifndef LAB05_DEPENDENCY_INVERSION_SOLUTION_IPAYMENTSENDER_H
#define LAB05_DEPENDENCY_INVERSION_SOLUTION_IPAYMENTSENDER_H


#include <string>

class IPaymentSender {
public:
    virtual std::string sendPayment() const = 0;

    virtual ~IPaymentSender();
};


#endif //LAB05_DEPENDENCY_INVERSION_SOLUTION_IPAYMENTSENDER_H
