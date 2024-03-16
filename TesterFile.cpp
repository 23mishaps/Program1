// Misha
// Santi
// Axel 

#include "BankAccount.h"
#include "SavingsAccount.h"
#include "CheckingsAccount.h"
#include "HighInterestChecking.h"
#include "NoInterestChecking.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    //creating savings account and using associated methods
    SavingsAccount savings(1001,"Darlene");
    savings.setRate(2.00);
    //testing deposit method
    cout << "\nMaking a deposit to " << savings.getOwnerName() << "'s account." << endl;
    savings.deposit(100.00);
    savings.printStatement();
    //testing withdraw function with value that is less than balance (valid withdraw)
    cout << "\nMaking a withdraw from acount ending in: " << savings.getAccountNo() << endl;
    savings.withdraw(9.0);
    savings.printStatement();
    //testing withdraw function when value is greater than balance (invalid withdraw)
    cout << "\nMaking a withdraw from the account..." << endl;
    savings.withdraw(200.0);
    savings.printStatement();
    

    //creating a Nointerest account
    NoInterestChecking ni_account(1002, "Sarah");
    ni_account.setCheckFee(5.00);
    //testing deposit method
    cout << "\nMaking a deposit to " << ni_account.getOwnerName() << "'s account." << endl;
    ni_account.deposit(100.00);
    ni_account.printStatement();
    //testing withdraw method when withdraw is less than balance (valid withdraw)
    cout << "\nMaking a withdraw from acount ending in: " << ni_account.getAccountNo() << endl;
    ni_account.withdraw(10.0);
    ni_account.printStatement();
    //testing wrtie check method when value is less than balance (valid check)
    cout << "\nWriting a check with fee of: $" << ni_account.getCheckFee() << ".00" << endl;
    ni_account.writeCheck(20.00);
    ni_account.printStatement();
    //testing write check method when value is greater than balance (invalid check)
    cout << "\nWriting a check with a fee of: $" << ni_account.getCheckFee() << ".00" << endl;
    ni_account.writeCheck(200.00);
    ni_account.printStatement();



    return 0;
}
