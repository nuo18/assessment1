#include "main.h"
using namespace std;

void main()
{
    //The code in this file has been produced to show you how to seed
    //a random number generator, and use it. In main.h, we are using
    //C++'s <random> library to generate random numbers.

    //This can be done with srand() and rand(), but we have opted for
    //using a modern C++ approach. It gives you much more control
    //over the random numbers generated.

    //-----------
    //Expand the current solution to build a random number guessing game.
    //The game should produce a random number between 0-100, and ask users
    //for their guess. Based on their guess, the game should:

    //- Say "freezing" if the number is plus or minus 50 from the guess.
    //- Say "colder" if the number is plus or minus 35 from the guess.
    //- Say "cold" if the number is plus or minus 25 from the guess.
    //- Say "warm" if the number is plus or minus 15 from the guess.
    //- Say "warmer" if the number is plus or minus 10 from the guess.
    //- Say "hot" if the number is plus or minus 5 from the guess.
    //- Say "boiling" if the number is plus or minus 2 from the guess.

    //Once the user has submitted a guess, the program should show them
    //one of these strings and prompt them for another guess.

    //Alternatively, if the guess is correct, a success message should be shown,
    //telling the player they have won.

    //At the end of the program, it should also display the number of guesses
    //the player needed to guess the value in.     

    int guess = 0;
    // Generating the random number
    int answer = random(0, 100);
    int userGuesses = 0;

    cout << "Welcome to the random number guessing game!" << endl;
    cout << "Enter a guess: ";
    cin >> guess;

    userGuesses++;

    while (guess != answer)
    {
        if (guess > 99 || guess < 1)
        {
            cout << "Please enter a number between 0 - 100." << endl;
        }
        else if (answer + 2 >= guess && guess >= answer - 2)
        {
            cout << "Boiling!" << endl;
        }
        else if (answer + 5 >= guess && guess >= answer - 5)
        {
            cout << "Hot!" << endl;
        }
        else if (answer + 10 >= guess && guess >= answer - 10)
        {
            cout << "Warmer!" << endl;
        }
        else if (answer + 15 >= guess && guess >= answer - 15)
        {
            cout << "Warm!" << endl;
        }
        else if (answer + 25 >= guess && guess >= answer - 25)
        {
            cout << "Cold!" << endl;
        }
        else if (answer + 35 >= guess && guess >= answer - 35)
        {
            cout << "Colder!" << endl;
        }
        else if (answer + 50 >= guess && guess >= answer - 50)
        {
            cout << "Freezing!" << endl;
        }
        else if (answer + 100 >= guess && guess >= answer - 100)
        {
            // For extreme cases where the random number is very low/high and the guess is very high/low
            cout << "Freezing!" << endl;
        }
        else
        {
            break;
        }

		cout << "Enter a guess: ";
		cin >> guess;
        userGuesses++;
	}

    cout << "You guessed the number in " << userGuesses << " guesses!" << endl;
    cout << "Thanks for playing!" << endl;
}