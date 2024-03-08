//implementation of "CheckingAccount.h"
#include "CheckingsAccount.h"
#include <string>
#include <iostream>
using namespace std;
//constructors
CheckingsAccount::CheckingsAccount(int accountNo, string newOwner):BankAccount(accountNo, newOwner),checkFee(0.0){};
//mutator and accessor methods
void CheckingsAccount::setCheckFee(double newFee)
{
    checkFee = newFee;
}
double CheckingsAccount::getCheckFee() const
{
    return checkFee;
}
//methods
void CheckingsAccount::writeCheck(double checkValue)
{
    if(balance > (checkValue + checkFee))
    {
        balance -= (checkValue + checkFee);
    }
    else 
    {
        cout << "Account Balance is less than check and check fee.\nCannot write check." << endl;
    }
}
