#ifndef _BANKACCOUNT_
#define _BANKACCOUNT_ 
#include <string>
using namespace std;
class BankAccount
{
private:
    int accountNo;
    string owner;
    double balance;

public:
    //constructors
    BankAccount(int newAccountNo, string newOwner);
    
    //mutator and accessor methods
    int getAccountNo() const;
    string getOwnerName()const;
    double getBalance()const;
    
    //abstract methods
    virtual double calculateInterest() = 0;
    virtual void printStatement() = 0;
    
    //methods
    void deposit(double amt);
    void withdraw(double amt);
};

#endif
