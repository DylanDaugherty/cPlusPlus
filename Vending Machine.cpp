// Vending Machine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//Function Declaration
double AddMoney() 
{
    double cash;
    char input;
    double const DValue = 1.00;
    double const qValue = 0.25;
    double const dValue = 0.10;
    double const nValue = 0.05;
    int const D = 1;
    int const q = 2;
    int const d = 3;
    int const n = 4;
    cash = DValue + qValue + dValue + nValue;

    cout << "Enter D for Dollar for $1.00\n";
    cout << "Enter q for Quarters for $0.25\n";
    cout << "Enter d for Dimes for $0.10\n";
    cout << "Enter n for Nickels for $.0.05\n";
    cin >> input;

    switch (input)
    {
    case 'D':
        cash = cash + DValue;
    case 'q':
        cash = cash + qValue;
    case 'd':
        cash = cash + dValue;
    case 'n':
        cash = cash + nValue;


    }
    cout << cash;
    return 1;
}


void MakeChange(double cash){}



int main()
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "Would you like and Ice Cream bar? They cost $2.75. We can accept Dollars, Quarters, Nickels, and Dimes.";
    void addMoney();



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
