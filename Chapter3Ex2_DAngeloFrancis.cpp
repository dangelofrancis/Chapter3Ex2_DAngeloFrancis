/*
REQUIREMENTS: There are three seating categories at a stadium. 
For a softball game, Class A seats cost $15, Class B seats cost $12, and Class C seats cost $9. 

Write a program that asks how many tickets for each class of seats were sold, 
then displays the amount of income generated from ticket sales. 

Format your dollar amount in fixed-point notation, with two decimal places of precision, 
and be sure the decimal point is always displayed.
*/

#include <iostream>
#include <iomanip>
using namespace std;

const double classA = 15.00;
const double classB = 12.00;
const double classC = 9.00;

int main()
{
    int Aticket;
    int Bticket;
    int Cticket;

    cout << "How many A class tickets did you sell? ";
    cin >> Aticket;
    cout << "How many B class tickets did you sell? ";
    cin >> Bticket;
    cout << "How many C class tickets did you sell? ";
    cin >> Cticket;

    cout << fixed << setprecision(2);
    cout << "Your total profit is: $" << (classA * Aticket) + (classB * Bticket) + (classC * Cticket);
}
