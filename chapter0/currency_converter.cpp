//write a currency converter program that converts yen, euros, and pounds into dollars.
#include<iostream>
#include<cstdlib>
#include<string>

//------------------------------------------------------------------------------
using namespace std;

int main()
{
    const double yens_per_dollar = 101.67;  // number of yens per dollar
    const double euros_per_dollar = .82;  // number of euros per dollar
    const double pounds_per_dollar = 0.73;  // number of pounds per dollar
    int dollar = 1;                   // length in inches or centimeters
    char unit = ' ';                  // a space is not a unit

    cout<< "Please enter the amount of dollars and then the type of currency that 
    you want to exchange (y fo yens, e for Euros, and p for Pounds):\n";
    
    cin >> dollar >> unit;

    if (unit == 'y')
        cout << dollar << " dollars == " << yens_per_dollar * dollar << " yens \n";
    else if (unit == 'e')
        cout << dollar << " dollars == " << euros_per_dollar * dollar << " euros \n";
    else
        cout << dollar << " dollars == " << pounds_per_dollar * dollar  <<  " pounds \n";
}
