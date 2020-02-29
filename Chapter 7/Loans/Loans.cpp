/* 
user provides number between 1-18 for interest percent

user provides number between 100-1000 for loan amount
    loan fee of 20 if loan amount is 100-499
        25 if over 500

display error if user fails to follow parameters presented

calculations! (lazy psuedo)

*/

#include <iostream>

using namespace std;



int main()
{
    float
        irate,
        loan;

    cout << "What's the desired interest rate?\t\t";
    cin >> irate;

    if (irate >= 1 && irate <= 18)
    {
        cout << "\nWhat's the desired loan amount?\t\t";
        cin >> loan;

        float
            iloan = ((loan) * (1 + (irate * .1)));

        if (loan >= 100 && loan <= 499)
        {
            cout << "\nThere will be a fee of $20 to process the loan.";
            cout << "\n\nYou're requesting a loan for $" << loan << " at a rate of " << irate << "%:";
            cout << "\nafter 12 months, you will have paid a total of $" << iloan << " not including the $20 fee.";
        }
        else if (loan >= 500 && loan <= 1000)
        {
            cout << "\nThere will be a fee of $25 to process the loan.";
            cout << "\n\nYou're requesting a loan for $" << loan << " at a rate of " << irate << "%:";
            cout << "\nafter 12 months, you will have paid a total of $" << iloan << " not including the $25 fee.\n\n";
        }
        else
        {
            cout << "\nPlease input an amount between $100 and $1000.\n\n";

        }
    }
    else
    {cout << "\nPlease input a number between 1 and 18\n\n";}
  
    return 0;
}