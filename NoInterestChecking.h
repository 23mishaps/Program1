#ifndef _NOINTERESTCHECKING_ 
#define _NOINTERESTCHECKING_
#include "CheckingsAccount.h"
class NoInterestChecking : public CheckingsAccount
{ 
public:
    //constructors
    NoInterestChecking(int accountNo, string owner);

    //methods
    double calculateBalance();
    void printStatement();

};
#endif

//class implementation

NoInterestChecking::NoInterestChecking(int accountNo, string owner): CheckingsAccount(accountNo, owner){};

double NoInterestChecking::calculateBalance()
{
    return 0;
}
void NoInterestChecking::printStatement()
{
    cout << "Account Type: No Interest Checkings Account\nAccount Number: " << accountNo << endl;
    cout << "Account Owner: " << owner << "\nAccount Balance: " << balance << endl;
    cout << "Interest earned: " << calculateBalance() << "\nNewBalance: " << (balance + calculateBalance()) << endl;
    balance = calculateBalance();
}