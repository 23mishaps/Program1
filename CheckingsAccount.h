#ifndef _CHECKINGSACCOUNT_
#define _CHECKINGSACCOUNT_ 
#include <string>
#include <iostream>
#include "BankAccount.h"
class CheckingsAccount : public BankAccount
{

private: 
    double checkFee;
public: 
    //constructors
    CheckingsAccount(int accountNo, string newOwner);
    //mutator and accessor methods
    void setCheckFee(double newFee);
    double getCheckFee() const;
    //methods
    void writeCheck(double checkValue);
    double calculateBalance() = 0;
    void printStatement() = 0;
    

};
#include "CheckingsAccount.cpp"
#endif