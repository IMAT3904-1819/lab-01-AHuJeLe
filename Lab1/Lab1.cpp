// Lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>

using namespace std;

int main()
{

	int rNumber, pGuess, nGuesess;

	nGuesess = 5;

	// Random number
	srand(time(NULL));

	rNumber = rand() % 100 + 1;

	cout << "Hello, please guess a number between 1 and a 100" << endl;
	cout << "You will have to guess the number in 5 guesses" << endl;
	cout << "Good luck!" << endl;

	do
	{
		// Players input 
		cin >> pGuess;

		while (!cin)
		{
			cin.clear();
			cin.ignore();

			cout << "Please use only numbers" << endl;

			cin >> pGuess;
		}

			// Cumputers input higher/lower if ?? is lower state lower if ?? is higher state higher
			// If players input correct
			// Computers input states that it is correct
			if (rNumber < pGuess)
			{
				cout << "The number is lower than " << pGuess << "\n\n";

				nGuesess--;
			}

			if (rNumber > pGuess)
			{
				cout << "The number is higher than " << pGuess << "\n\n";

				nGuesess--;
			}

			if (rNumber == pGuess)
			{
				cout << "Correct, congratulations! The number was " << rNumber << endl;
			}

			if (nGuesess == 0)
			{
				cout << "Sorry, you have lost. :( The number was " << rNumber << endl;
			}

		// Loops stops when player has 0 guesses or if guesses correctly.
	} while (rNumber != pGuess && nGuesess != 0);

	

	system("pause");
}