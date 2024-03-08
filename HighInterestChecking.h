#ifndef _HIGHINTERESTCHECKING_
#define _HIGHINTERESTCHECKING_
#include "CheckingsAccount.h"
class HighInterestChecking : public CheckingsAccount
{
private: 
    double intRate;
    double minBalance;
public:
    //constructors
    HighInterestChecking(int accountNo, string owner);

    //mutator and accessor methods
    void setRate(double newRate);
    void setMinBalance(double newMin);
    double getRate();
    double getMinBalance();

    //methods
    double calculateBalance();
    void printStatement();

};

#endif

