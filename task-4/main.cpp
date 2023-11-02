#include <iostream>
#include <string>
using namespace std;

void main()
{
    //For this challenge, produce a program which 
    //prompts the user for a string of text. When
    //this text is entered, the program should:

    //- Automatically generate a box around the text.
    //- And show it in the console.

    //This is a feature commonly seen in text-based
    //adventure games, to show speech bubbles for characters.

    //---
    //An example session:    

    //Please enter some text: blah something
    //
    // ******************
    // * blah something *
    // ******************

    //Can you also expand this so that the box can be
    //shown with some padding? Or turn it into a function?

    string input;

    // Asking for input
    cout << "Please enter some text: ";
    getline(cin, input);

    // Making the padding
    string box = string(input.length() + 4, '*');
    input = "* " + input + " *";

    // Printing the box
    cout << box << endl;
    cout << input << endl;
    cout << box << endl;
}