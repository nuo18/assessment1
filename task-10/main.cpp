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

    string c1_crg[6] = {
        "Fail", 
        "A score between 30 marks to 39 marks has been achieved.", 
        "A score between 40 marks to 49 marks has been achieved.", 
        "A score between 50 marks to 59 marks has been achieved.", 
        "A score between 60 marks to 69 marks has been achieved.", 
        "A score totaling 70 marks or above has been achieved."
    };

    string c2_crg[6] = {
        "Fail.",
        "The reflective journal has been created, but fundamentally provides no insight into the lessons learned throughout development.",
        "The reflective journal provides a somewhat reflective account of development throughout the challenges. However, some critical insights and key areas may be missing.",
        "The reflective journal provides a good account of the development journey, providing a good breakdown of hurdles overcome throughout development. The journal also provides reflective insight into lessons learned throughout the completion of the challenges.",
        "A great reflective journal that provides a good breakdown of the development journey, along with a fantastic reflective discussion of the lessons learned and challenges overcome.",
        "An exceptional account of the development journey has been provided, along with a concise but comprehensive discussion of the lessons learned. The reflective journal provides great evidence of self-reflection regarding the key challenges and lessons learned throughout development."
    };
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

    string c1_crg[6] = {
        "Fail",
        "A text-based game has been implemented, but this is either non-functional or lacks the required features.",
        "A text-based game has been implemented. Most of the required features are functional, but there may be significant bugs or errors in the gameplay. A basic game loop has been implemented with some level of interactivity.",
        "A text-based game has been implemented. The required features are functional and well-implemented. There are little to no bugs present throughout. A game loop has been implemented which features player interactivity.",
        "A text - based game has been delivered with all the required features.There are no bugs evident during gameplay.Interactivity is well - handled and robust, with special edge cases(such as invalid user input) handled. A game loop is present which is robust and has been well-implemented.",
        "A game has been delivered that is portfolio ready. All required features have been implemented. Alongside the other requirements for the criterion band, the game is polished and presented in a professional manner."
    };

    string c2_crg[6] = {
        "Fail",
        "Little to no best practices are found throughout the code, and the code is not of an adequate quality. The intent of the code is largely unclear as a result.",
        "Some best practices are found throughout, and the code is of an acceptable quality. The intent of the code is somewhat understandable and may use comments to elucidate some parts.",
        "Good practice is found throughout the solution, and the code is of a good quality. The intent of the code is clear throughout. Comments are used throughout.",
        "Best practices are found throughout the code, and the code is of a great quality. The intent of the code is clear, and concise. Comments are used throughout where appropriate.",
        "The code is clear, concise, and of an industry standard. Best practices are used throughout, and the code has been developed with quality in mind."
    };

    string c3_crg[6] = {
        "Fail",
        "Some programming techniques have been used, but these are either not appropriate for the challenge or are limited in their scope.",
        "Learned programming techniques have been used appropriately in parts, but other methods may be more appropriate.",
        "Generally, learned programming techniques have been well used in parts to build a good attempt to the solution.",
        "A broad range of learned programming techniques have been appropriately applied throughout to build a great attempt to the solution. Several advanced techniques have been used throughout.",
        "A fantastic solution to the problem has been supplied, and several programming techniques have been used to inform the industry - standard design of a solution. Several advanced techniques have been used throughout."
    };
};

void main()
{
    //User input
    crg1 assessment1;
    crg2 assessment2;

    cout << "Grade Calculator" << endl;
    cout << "--------------------------------" << endl;

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

    // Grade calculation
    assessment1.percentage = (assessment1.c1_marks * assessment1.c1_weight / 100) + (assessment1.c2_marks * assessment1.c2_weight / 100);
    assessment2.percentage = (assessment2.c1_marks * assessment2.c1_weight / 100) + (assessment2.c2_marks * assessment2.c2_weight / 100) + (assessment2.c3_marks * assessment2.c3_weight / 100);
    

    cout << "\n--------------------------------\n" << endl;

    // Output
    cout << "Your results!" << endl;
    cout << "--------------------------------" << endl;
    // Assessment 1
    cout << "Assessment 1 percentage: " << assessment1.percentage << "%" << endl;
    cout << "--------------------------------" << endl;
    cout << assessment1.band1 << endl;
    if (assessment1.percentage < 30) {
		cout << assessment1.c1_crg[0] << endl;
	}
    else if (assessment1.percentage >= 30 && assessment1.percentage < 40) {
		cout << assessment1.c1_crg[1] << endl;
	}
    else if (assessment1.percentage >= 40 && assessment1.percentage < 50) {
		cout << assessment1.c1_crg[2] << endl;
	}
    else if (assessment1.percentage >= 50 && assessment1.percentage < 60) {
		cout << assessment1.c1_crg[3] << endl;
	}
    else if (assessment1.percentage >= 60 && assessment1.percentage < 70) {
		cout << assessment1.c1_crg[4] << endl;
	}
    else if (assessment1.percentage >= 70) {
		cout << assessment1.c1_crg[5] << endl;
	}
    cout << "--------------------------------" << endl;
    cout << assessment1.band2 << endl;
    if (assessment1.percentage < 30) {
        cout << assessment1.c2_crg[0] << endl;
    }
    else if (assessment1.percentage >= 30 && assessment1.percentage < 40) {
		cout << assessment1.c2_crg[1] << endl;
	}
    else if (assessment1.percentage >= 40 && assessment1.percentage < 50) {
		cout << assessment1.c2_crg[2] << endl;
	}
    else if (assessment1.percentage >= 50 && assessment1.percentage < 60) {
		cout << assessment1.c2_crg[3] << endl;
	}
    else if (assessment1.percentage >= 60 && assessment1.percentage < 70) {
		cout << assessment1.c2_crg[4] << endl;
	}
    else if (assessment1.percentage >= 70) {
		cout << assessment1.c2_crg[5] << endl;
	}

    cout << "\n--------------------------------\n" << endl;

    // Assessment 2
    cout << "Assessment 2 percentage: " << assessment2.percentage << "%" << endl;
    cout << "--------------------------------" << endl;
    cout << assessment2.band1 << endl;
    if (assessment2.percentage < 30) {
        cout << assessment2.c1_crg[0] << endl;
    }
    else if (assessment2.percentage >= 30 && assessment2.percentage < 40) {
        cout << assessment2.c1_crg[1] << endl;
    }
    else if (assessment2.percentage >= 40 && assessment2.percentage < 50) {
		cout << assessment2.c1_crg[2] << endl;
	}
    else if (assessment2.percentage >= 50 && assessment2.percentage < 60) {
		cout << assessment2.c1_crg[3] << endl;
	}
    else if (assessment2.percentage >= 60 && assessment2.percentage < 70) {
		cout << assessment2.c1_crg[4] << endl;
	}
    else if (assessment2.percentage >= 70) {
		cout << assessment2.c1_crg[5] << endl;
	}
    cout << "--------------------------------" << endl;
    cout << assessment2.band2 << endl;
    if (assessment2.percentage < 30) {
		cout << assessment2.c2_crg[0] << endl;
	}
    else if (assessment2.percentage >= 30 && assessment2.percentage < 40) {
        cout << assessment2.c2_crg[1] << endl;
    }
    else if (assessment2.percentage >= 40 && assessment2.percentage < 50) {
        cout << assessment2.c2_crg[2] << endl;
    }
    else if (assessment2.percentage >= 50 && assessment2.percentage < 60) {
		cout << assessment2.c2_crg[3] << endl;
	}
    else if (assessment2.percentage >= 60 && assessment2.percentage < 70) {
		cout << assessment2.c2_crg[4] << endl;
	}
    else if (assessment2.percentage >= 70) {
		cout << assessment2.c2_crg[5] << endl;
	}
    cout << "--------------------------------" << endl;
    cout << assessment2.band3 << endl;
    if (assessment2.percentage < 30) {
        cout << assessment2.c3_crg[0] << endl;
    }
    else if (assessment2.percentage >= 30 && assessment2.percentage < 40) {
		cout << assessment2.c3_crg[1] << endl;
	}
    else if (assessment2.percentage >= 40 && assessment2.percentage < 50) {
		cout << assessment2.c3_crg[2] << endl;
	}
    else if (assessment2.percentage >= 50 && assessment2.percentage < 60) {
        cout << assessment2.c3_crg[3] << endl;
    }
    else if (assessment2.percentage >= 60 && assessment2.percentage < 70) {
        cout << assessment2.c3_crg[4] << endl;
    }
    else if (assessment2.percentage >= 70) {
		cout << assessment2.c3_crg[5] << endl;
	}

    cout << "\n--------------------------------\n" << endl;
    cout << "Overall percentage: " << (assessment1.percentage + assessment2.percentage) / 2 << "%" << endl;
}