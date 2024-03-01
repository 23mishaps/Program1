//implementation for "HighInterestChecking.h"
#include "HighInterestChecking.h"

//constructors
HighInterestChecking::HighInterestChecking(int accountNo, string owner): CheckingsAccount(accountNo, owner), intRate(0.0), minBalance(0.0){};

//mutator and accessor methods
void HighInterestChecking::setRate(double newRate)
{
    if(newRate < 1 && newRate > 0)
    {
        intRate = newRate;
    }
    else 
    {
        cout << "Rate should be percentage such as .50 for 50%.\nCould not set new rate." << endl;
    }
}
void HighInterestChecking::setMinBalance(double newMin)
{
    minBalance = newMin;
}
double HighInterestChecking::getRate()
{
    return intRate;
}
double HighInterestChecking::getMinBalance()
{
    return minBalance;
}

//methods
double HighInterestChecking::calculateBalance()
{
    return (intRate * balance);
}
void HighInterestChecking::printStatement()
{
    cout << "Account Type: High Interest Checkings Account\nAccount Number: " << accountNo << endl;
    cout << "Account Owner: " << owner << "\nAccount Balance: " << balance << endl;
    cout << "Interest earned: " << calculateBalance() << "\nNewBalance: " << (balance + calculateBalance()) << endl;
    balance = calculateBalance();
}