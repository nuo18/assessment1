#include <iostream>
using namespace std;

struct crg1
{
    //user input
    int c1_marks = 0;
    int c2_marks = 0;

    //weighting
    int c1_weight = 70;
    int c2_weight = 30;

    float percentage;

    //Bands
    string band1 = "C1 The completion of the given programming challenges, and development of a portfolio.";
    string band2 = "C2 A reflective journal on the development of a programming portfolio.";
};

struct crg2
{
    //user input
    int c1_marks = 0;
    int c2_marks = 0;
    int c3_marks = 0;

    //weighting
    int c1_weight = 60;
    int c2_weight = 20;
    int c3_weight = 20;

    float percentage;

    //Bands
    string band1 = "C1 Development of text-based game artefact";
    string band2 = "C2 Code quality and best practices";
    string band3 = "C3 Demonstration of broad range of programming techniques and applicability of learned techniques";
};

void main()
{
    //User input
    crg1 assessment1;
    crg2 assessment2;

    //Assessment 1
    cout << "Assessment 1" << endl;
    cout << "Enter marks for criterion 1: ";
    do {
        cin >> assessment1.c1_marks;
        if (cin.fail() || assessment1.c1_marks < 0 || assessment1.c1_marks > 100) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number between 0 and 100: ";
        }
        else {
            break;
        }
    } while (true);
    cout << "Enter marks for criterion 2: ";
    do {
        cin >> assessment1.c2_marks;
        if (cin.fail() || assessment1.c2_marks < 0 || assessment1.c2_marks > 100) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number between 0 and 100: ";
        }
        else {
            break;
        }
    } while (true);

    cout << "\n--------------------------------\n" << endl;

    //Assessment 2
    cout << "Assessment 2" << endl;
    cout << "Enter marks for criterion 1: ";
    do {
        cin >> assessment2.c1_marks;
        if (cin.fail() || assessment2.c1_marks < 0 || assessment2.c1_marks > 100) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number between 0 and 100: ";
        }
        else {
            break;
        }
    } while (true);
    cout << "Enter marks for criterion 2: ";
    do {
        cin >> assessment2.c2_marks;
        if (cin.fail() || assessment2.c2_marks < 0 || assessment2.c2_marks > 100) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number between 0 and 100: ";
        }
        else {
            break;
        }
    } while (true);
    cout << "Enter marks for criterion 3: ";
    do {
        cin >> assessment2.c3_marks;
        if (cin.fail() || assessment2.c3_marks < 0 || assessment2.c3_marks > 100) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number between 0 and 100: ";
        }
        else {
            break;
        }
    } while (true);

    //Grade calculation
    assessment1.percentage = (assessment1.c1_marks * assessment1.c1_weight / 100) + (assessment1.c2_marks * assessment1.c2_weight / 100);
    assessment2.percentage = (assessment2.c1_marks * assessment2.c1_weight / 100) + (assessment2.c2_marks * assessment2.c2_weight / 100) + (assessment2.c3_marks * assessment2.c3_weight / 100);
    

    cout << "\n--------------------------------\n" << endl;

    //Output
    cout << "Assessment 1 percentage: " << assessment1.percentage << "%" << endl;
    cout << "Assessment 2 percentage: " << assessment2.percentage << "%" << endl;
    cout << "Overall percentage: " << (assessment1.percentage + assessment2.percentage) / 2 << "%" << endl;

    // For each component

}