//implementation of BankAccount abstract class
#include "BankAccount.h"
#include <string>
#include <iostream>
using namespace std;
//constructors
BankAccount::BankAccount(int newAccountNo, string newOwner): accountNo(newAccountNo), owner(newOwner), balance(0.0){};

//mutator and accessor methods
int BankAccount::getAccountNo() const
{
    return accountNo;
}
string BankAccount::getOwnerName()const
{
    return owner;
}
double BankAccount::getBalance()const
{
    return balance;
}

//methods
void BankAccount::deposit(double amt)
{
    if(amt > 0)
    {
        balance += amt;
    }
    else 
    {
        cout << "Cannot deposit a negative funds." << endl;
    }
}
void BankAccount::withdraw(double amt)
{
    if(balance > amt)
    {
        balance-= amt;
    }
    else 
    {
        cout << "Cannot withdraw funds. Balance insufficient." << endl;
    }
}
