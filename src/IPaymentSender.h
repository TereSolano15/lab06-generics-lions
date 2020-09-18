//
// Created by Maikol Guzman on 8/24/20.
//

#ifndef LAB05_DEPENDENCY_INVERSION_SOLUTION_IPAYMENTSENDER_H
#define LAB05_DEPENDENCY_INVERSION_SOLUTION_IPAYMENTSENDER_H


#include <string>
#include <type_traits>

template<class T>
class IPaymentSender {
public:

    virtual T sendPayment() const = 0;

    virtual ~IPaymentSender();
};


#endif //LAB05_DEPENDENCY_INVERSION_SOLUTION_IPAYMENTSENDER_H
