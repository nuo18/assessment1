#include <iostream>
#include <cctype>
#include <string>
using namespace std;

// Function prototype
void sentenceCase(string input);
void allLowercase(string input);
void allUppercase(string input);
void checkAlphabetical(string input);

void main()
{
    //Make a program which converts any given string to sentence
    //case. For example:

    // Please enter some text: hello this is a sentence. and here is another. and another.
    //
    // > Hello this is a sentence. And here is another. And another.

    //The program should be able to work regardless of whitespace between
    //period characters. Note that proper nouns shouldn't be considered here, just
    //the rule that if a character is after a period, it should be capitalised.

    //Additionally, you should expand the solution to:
    //
    // - Show the given text in sentence case, lowercase, or uppercase
    // - Detect if the text has no alphabetical characters, and if so, show a warning
    //
    // e.g.

    // Please enter some text: hello this is another sentence. blah. something else.
    //
    // - Sentence case: Hello this is another sentence. Blah. Something else.
    // - Lowercase: hello this is another sentence. blah. something else.
    // - Uppercase: HELLO THIS IS ANOTHER SENTENCE. BLAH. SOMETHING ELSE.
    //

    // Taking input from user
    string input;
    cout << "Please enter some text: ";
    getline(cin, input); // getline() is used to take input with spaces
    cout << endl;

    // Calling the function
    sentenceCase(input);
    allLowercase(input);
    allUppercase(input);
    checkAlphabetical(input);
}

void sentenceCase(string input)
{
	// Converting first character to uppercase
	input[0] = toupper(input[0]);

    // temp variable
    int j = 0;

	// Looping through the string
    for (int i = 0; i < input.length(); i++)
    {
		// Checking if the character is a period and not the last character
        if (input[i] == '.' && i < input.length()-1)
        {
            j = i;
            // Making the program work regardless of the number of whitespaces
            while (!isalpha(input[j]))
            {
                j++;
			}

            // Converting the character to uppercase
            input[j] = toupper(input[j]);
		}
	}
    
	// Printing the string
	cout << " - Sentence case: " << input << endl;
}

void allLowercase(string input)
{
	// Looping through the string
    for (int i = 0; i < input.length(); i++)
    {
		// Converting the character to lowercase
		input[i] = tolower(input[i]);
	}

	// Printing the string
	cout << " - Lowercase: " << input << endl;
}

void allUppercase(string input)
{
	// Looping through the string
    for (int i = 0; i < input.length(); i++)
    {
		// Converting the character to uppercase
		input[i] = toupper(input[i]);
	}

	// Printing the string
	cout << " - Uppercase: " << input << endl;
}

void checkAlphabetical(string input)
{
    int check = 0;
	// Looping through the string
    for (int i = 0; i < input.length(); i++)
    {
		// Checking if the character is alphabetical
        if (isalpha(input[i]))
        {
			check++;
		}
	}

    // Checking if the string has no alphabetical characters
    if (check == 0)
    {
		// Printing the warning
		cout << " - Warning: The text has no alphabetical characters." << endl;
	}
    else
    {
        cout << " - The text does have alphabetical characters." << endl;
    }
}