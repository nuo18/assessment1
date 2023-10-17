#include <iostream>
using namespace std;

struct Assessment1
{
    // Course information
    string name = "Assessment #1 Challenges";
    int weighting = 50;
    int overall_grade;

    // Challenge information
    int challenges[10];
    int challenges_weighting[10] = { 5, 5, 5, 10, 10, 10, 10, 15, 15, 15 };
    int challenges_overall_grade;
    int challenges_overall_weighting = 70;

    // Documentation information
    int documentation;
    int documentation_weighting = 30;
};

struct Assessment2
{
    // Course information
    string name = "Assessment #2 ASCII Game";
    int weighting = 50;
    int overall_grade;

    // Development information
    int development;
    int development_weighting = 60;
    int code_quality;
    int code_weighting = 20;
    int programming;
    int programming_weighting = 20;
};

void main()
{
    Assessment1 assm1;
    Assessment2 assm2;
    
   cout << "Grade Calculator for Programming Fundamentals Course!" << endl;
   cout << "\n---------------------------------------------------\n" << endl;

   // Assessment 1
   // Challenges
   cout << "Assessment #1 Challenges" << endl;
   for (int i = 0; i < 10; i++)
   {
	   cout << "Enter your marks for challenge #" << i + 1 << ": ";
	   cin >> assm1.challenges[i];
       if (assm1.challenges[i] < 0 || assm1.challenges[i] > assm1.challenges_weighting[i])
       {
		   cout << "Invalid input, please enter a grade between 0 and 100." << endl;
		   i--;
	   }

       // Adding the grade for an overall
       assm1.challenges_overall_grade += assm1.challenges[i];
   }
   cout << endl;

   // Documentation
   cout << "Enter your marks for documentation: ";
   cin >> assm1.documentation;

   // Calculation for Assessment 1

}

//Add code to build a grade calculator for the module. This should:
    //
    // - Prompt the user for input, for the grade of each component of assessment 1
    // - Prompt the user for input, for the grade of each component of assessment 2
    // - Provide a detailed breakdown of:
    //      - List the overall percentage of each assessment
    //      - Their overall grade after percentage weighting
    //      - Output which CRG band they fit into, for each criterion

    //Invalid input should be detected and handled after prompting. For example,
    //if the input grade "-1" is given, the user should be reprompted to enter the
    //grade again.

    //Furthermore, please use structs and arrays where appropriate to model
    //the different assessment components.
    //