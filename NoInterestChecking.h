#ifndef _NOINTERESTCHECKING_ 
#define _NOINTERESTCHECKING_
#include "CheckingsAccount.h"
class NoInterestChecking : public CheckingsAccount
{ 
public:
    //constructors
    NoInterestChecking(int accountNo, string owner);

    //methods
    double calculateInterest();
    void printStatement();

};

//class implementation

NoInterestChecking::NoInterestChecking(int accountNo, string owner): CheckingsAccount(accountNo, owner){};

double NoInterestChecking::calculateInterest()
{
    return 0;
}
void NoInterestChecking::printStatement()
{
    cout << "Account Type: No Interest Checkings Account\nAccount Number: " << getAccountNo() << endl;
    cout << "Account Owner: " << getOwnerName() << "\nAccount Balance: " << getBalance() << endl;
    cout << "Interest earned: " << calculateInterest() << "\nNewBalance: " << (getBalance() + calculateInterest()) << endl;
    deposit(calculateInterest());
}

#endif