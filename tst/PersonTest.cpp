//
// Created by Maikol Guzman on 8/24/20.
//

#include <IPaymentSender.h>
#include <BankTransferSender.h>
#include <Person.h>
#include <CashSender.h>
#include <CheckSender.h>
#include "gtest/gtest.h"

TEST(PersonTestSuite, VerifyProcessPayment){

    IPaymentSender* paymentByTransfer = new BankTransferSender();
    IPaymentSender* paymentByCash = new CashSender();
    IPaymentSender* paymentByCheck = new CheckSender();

    Person person;

    EXPECT_EQ(person.processPayment(paymentByTransfer), "Sending the money by transference");
    EXPECT_EQ(person.processPayment(paymentByCash), "Give the money in the hands");
    EXPECT_EQ(person.processPayment(paymentByCheck), "Sending the check with the money");
}
