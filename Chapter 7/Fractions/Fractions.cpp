/*

display request of numerator input from user
display request of denominator input from user

if num is larger than denom
    use rem to find integer
        display integer  next to new numerator and old denom
            reduce num and denom to lowest if necessary
 
 else num is lower than denom
    display output of num over denom
        reduce num and denom to lowest if necessary

*/

#include <iostream>
#include <iomanip>
#include <functional>
#include <cmath>

using namespace std;

int
num,
denom,
mixed_int,
rem;


int main()
{
    cout << "Please input a whole number you would like as the numerator:\t";
    cin >> num;

    cout << "Please input a whole number you would like as the denominator:\t";
    cin >> denom;

    mixed_int = num / denom;
    rem = num % denom;

    if (denom == 0)
    {cout << "DOES NOT COMPUTE YO";}
  
    else if (abs(num) == abs(denom))
    {cout << "\n" << mixed_int << endl;}
     
    else if ((abs(num) > abs(denom) && rem == 0))
    {cout << mixed_int << endl;}

    else if (abs(num) > abs(denom))
    {cout << "\n" << mixed_int << " " << rem << "/" << denom << endl;}

    else
    {cout << "\n" << num << "/" << denom << endl; };

    return 0;
}


