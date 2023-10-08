#include <iostream>
using namespace std;

void main()
{
    //Add code to prompt a user for a single number, and then show
    //the square of that number. For example, imagine the session:

    // What number do you want to Square? 5
    // > 5 squared is 25.

    float num;

    // Take input
    cout << "What number do you want to Square? ";
    cin >> num;

    // Output
    cout << num << " squared is " << (num * num) << endl;
}