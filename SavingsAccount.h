#ifndef _SAVINGSACCOUNT_
#define _SAVINGSACCOUNT_
#include <string>
#include <iostream>
#include "BankAccount.h"
using namespace std;
class SavingsAccount : public BankAccount
{
private: 
    double intRate;
public:
    //constructors
    SavingsAccount(int newAccNo, string newOwner);


    //mutator and accessor methods
    void setRate(double newRate);
    double getRate() const;

    //methods
    double calculateInterest();
    void printStatement();

};

#endif