// ConsoleApplication3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Number Guesser, Created by Dylan Daugherty 1/28/2020


//Libraries and namespace declared
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

//Main program begins
int main()
{
//Introducing Random number 
srand((unsigned int)time(NULL));

//Variable Declartions
int numberToGuess = rand() % 10 + 1;
int guessAmount;
int guess;
int x = 0;

//cout << numberToGuess; //Uncomment to Test by showing random number 

//Prompts user for input and stores input in a variable
cout << "How many Guesses would you like to make?\n";
cin >> guessAmount;
//Introduction of while loop using X as a 'counter' variable
while (x < guessAmount)
{
	//User inputs the number they guess, Nested If statements calculate the value of 'x' 
	//And provide feedback if number is higher or lower, if number is equal this breaks the loop
	cout << "enter your guess?\n";
	cin >> guess;

	if (guess < numberToGuess)
	{
		cout << "Your guess is too low!\n";
		x += 1;
	}
	else if (guess > numberToGuess)
	{
		cout << "Your Guess is too high!\n";
		x += 1;
	}
	else if (guess == numberToGuess)
	{
		cout << "You guessed right!\n";
		break;
	}

}
//If Statement outside the loop that wont run if you guess right answer
if (x >= guessAmount)
{
	cout << "You have run out of guesses.\n";
}
}