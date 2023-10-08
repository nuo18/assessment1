#include <iostream>
using namespace std;

void main()
{
    //Add code to prompt the player for their name, and then
    //greet them with that name. For example, 
    //
    // Please enter your name: ben
    // Hello ben!
    //

    //Expand this so the player is asked for their name, clan tag,
    //age and username. Print out these details like so:
    //
    // - Name: <name>
    // - Username: [<clantag>]<username>
    // - Age: <age>
    //

    //defining variables
    string name;
    string clan;
    string username;
    int age;

    //Input Output
    cout << "Please enter your name: ";
    cin >> name;

    cout << "Please enter your clan tag: ";
    cin >> clan;

    cout << "Please enter your username: ";
    cin >> username;

    cout << "Please enter your age: ";
    cin >> age;

    //Printing details
    cout << "Player details: \n";
    cout << " - Name: " << name << endl;
    cout << " - Username: [" << clan << "] " << username << endl;
    cout << " - Age: " << age << endl;

}