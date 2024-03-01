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
    SavingsAccount s_account(1001, "Linda");
    HighInterestChecking h_account(1005, "Bob");
    NoInterestChecking ni_account(1009, "Tina");



    return 0;
}