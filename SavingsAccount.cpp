//implementation for SavingsAccount.h
#include <string>
#include <iostream>
#include "SavingsAccount.h"
using namespace std;
//constructors
SavingsAccount::SavingsAccount(int newAccNo,string newOwner): BankAccount(newAccNo,newOwner), intRate(0.0){};

//mutator and accessor methods
void SavingsAccount::setRate(double newRate)
{
    if(newRate < 1.0 && newRate > 0.0)
    {
        intRate = newRate;
    }
    else 
    {
        cout << "Rate must be a percentage such as .50 for 50%\nSetting rate to 0.01." <<endl;
        intRate = 0.01;
    }
}
double SavingsAccount::getRate() const
{
    return intRate;
}

//methods
double SavingsAccount::calculateBalance()
{
    return (intRate * balance);
}
void SavingsAccount::printStatement()
{
    cout << "Account Type: Savings Account\nAccount Number: " << accountNo << endl;
    cout << "Account Owner: " << owner << "\nAccount Balance: " << balance << endl;
    cout << "Interest earned: " << calculateBalance() << "\nNewBalance: " << (balance + calculateBalance()) << endl;
    balance += calculateBalance();
}
