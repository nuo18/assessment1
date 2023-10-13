#include <iostream>
using namespace std;

// Declaring a struct
struct player_details {
    string name;
    string username;
    int age;
    string playerclass;
    string sec_weapon;
    string potion;
};

void padding();

void main()
{
    //Using structs and arrays, build a character class and name selection system
    //for a text-based game. The program should firstly prompt the user for a class
    //using a numbered menu system. For example:

    // Please choose a character class below:
    // 1. Spearman
    // 2. Knight
    // 3. Archer
    //
    // > 3
    // - You have selected the Archer character class.

    //The character class names and amount are up to you, but should make 
    //use of an array so the solution can be easily extended. Invalid menu choices
    //should also be handled.

    //The user should then be prompted for their in-game name, and then their
    //player details should be shown. These details should be stored in a struct,
    //so player details can be a) easily extended to encompass more player detail
    //types in the future and b) logically exist in one structure.
    
    //The prompt should be shown like below:

    // Please enter your name: ben
    //
    // Player details:
    // - Name: ben
    // - Class: Knight

    // Creating a player details struct
    player_details player1;
    int player_choice;
    int break_case = -1;

    cout << "Please choose a character class below: " << endl;
    // Printing class
    cout << "1. Spearman\n";
    cout << "2. Knight\n";
    cout << "3. Archer";
    // cout << "4. Wizard\n";......

    // Padding for player input
    padding();
    cout << ">  ";

    while (break_case < 0)
    {
        // User input
        cin >> player_choice;

        switch (player_choice) {
        case 1:
            player1.playerclass = "Spearman";
            cout << "-  You have selected the Spearman character class.";
            padding();
            break_case = 1;
            break;
        case 2:
            player1.playerclass = "Knight";
            cout << "-  You have selected the Knight character class.";
            padding();
            break_case = 1;
            break;
        case 3:
            player1.playerclass = "Archer";
            cout << "-  You have selected the Archer character class.";
            padding();
            break_case = 1;
            break;
        default:
            cout << "-  Invalid choice!\n-  Please enter your choice again.";
            padding();
            continue;
        }
    }

    // Asking for username
    cout << "Please enter your name: ";
    cin >> player1.username;
    cout << "\n";

    // Printing player details
    cout << "Player details: " << endl;
    cout << "- Name: " << player1.username << endl;
    cout << "- Class: " << player1.playerclass << endl;
}

void padding()
{
    cout << "\n" << endl;
}