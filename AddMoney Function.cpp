// ConsoleApplication6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    double cash;
    char input;
    double DValue = 1.00;
    double qValue = .25;
    double dValue = .10;
    double nValue = .05;
    cash = 0.00;


    cout << "Enter D for Dollar for $1.00\n";
    cout << "Enter q for Quarters for $0.25\n";
    cout << "Enter d for Dimes for $0.10\n";
    cout << "Enter n for Nickels for $0.05\n";
    cin >> input;
    cout << cash << "\n" << DValue << "\n";
    

        switch (input)
        {


        case 'D':
            cash = DValue + cash;
            cout << "etf\n";
            break;
        case 'q':
            cash = cash + qValue;
            break;
        case 'd':
            cash = cash + dValue;
            break;
        case 'n':
            cash = cash + nValue;
            break;
        default:
            cout << "You have not put in the correct value, try again!\n";
            break;
        }
      
    



    cout << cash;
    return 1;
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
