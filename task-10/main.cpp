#include <iostream>
#include <string>
#include <limits>

using namespace std;

class Assessment {
public:
    int c1_marks = 0;
    int c2_marks = 0;
    int c3_marks = 0;  // For assessment2

    int c1_weight;
    int c2_weight;
    int c3_weight;  // For assessment2

    float percentage;

    string band1;
    string band2;
    string band3;  // For assessment2

    string c1_crg[6];
    string c2_crg[6];
    string c3_crg[6];  // For assessment2

    Assessment(int weight1, int weight2, const string& band1, const string& band2, const string c1_crg[6], const string c2_crg[6])
        : c1_weight(weight1), c2_weight(weight2), band1(band1), band2(band2) {
        for (int i = 0; i < 6; ++i) {
            this->c1_crg[i] = c1_crg[i];
            this->c2_crg[i] = c2_crg[i];
        }
    }

    // For assessment2
    Assessment(int weight1, int weight2, int weight3, const string& band1, const string& band2, const string& band3, const string c1_crg[6], const string c2_crg[6], const string c3_crg[6])
        : c1_weight(weight1), c2_weight(weight2), c3_weight(weight3), band1(band1), band2(band2), band3(band3) {
        for (int i = 0; i < 6; ++i) {
            this->c1_crg[i] = c1_crg[i];
            this->c2_crg[i] = c2_crg[i];
            this->c3_crg[i] = c3_crg[i];
        }
    }

    void enterMarks() {
        cout << "Enter marks for criterion 1: ";
        c1_marks = getValidMarks();
        cout << "Enter marks for criterion 2: ";
        c2_marks = getValidMarks();

        if (c3_weight > 0) {  // For assessment2
            cout << "Enter marks for criterion 3: ";
            c3_marks = getValidMarks();
        }
    }

    void calculatePercentage() {
        percentage = (c1_marks * c1_weight / 100.0) + (c2_marks * c2_weight / 100.0);

        if (c3_weight > 0) {  // For assessment2
            percentage += (c3_marks * c3_weight / 100.0);
        }
    }

    void displayResults() {
        cout << "--------------------------------\n";
        cout << "Assessment percentage: " << percentage << "%" << endl;
        cout << "--------------------------------\n";
        cout << band1 << endl;
        displayCRG(percentage, c1_crg);
        cout << "--------------------------------\n";
        cout << band2 << endl;
        displayCRG(percentage, c2_crg);

        if (c3_weight > 0) {  // For assessment2
            cout << "--------------------------------\n";
            cout << band3 << endl;
            displayCRG(percentage, c3_crg);
        }
    }

private:
    int getValidMarks() {
        int marks;
        do {
            cin >> marks;
            if (cin.fail() || marks < 0 || marks > 100) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid input." << endl;
                cout << "Please enter a number between 0 and 100: "<<endl;
            }
            else {
                break;
            }
        } while (true);
        return marks;
    }

    void displayCRG(float percentage, const string crg[6]) {
        int index = 0;
        if (percentage >= 30 && percentage < 40) {
            index = 1;
        }
        else if (percentage >= 40 && percentage < 50) {
            index = 2;
        }
        else if (percentage >= 50 && percentage < 60) {
            index = 3;
        }
        else if (percentage >= 60 && percentage < 70) {
            index = 4;
        }
        else if (percentage >= 70) {
            index = 5;
        }
        cout << crg[index] << endl;
    }
};

int main() {
    cout << "Grade Calculator" << endl;
    cout << "--------------------------------" << endl;

    // Assessment 1
    string c1_crg1[6] = {
        "Fail",
        "A score between 30 marks to 39 marks has been achieved.",
        "A score between 40 marks to 49 marks has been achieved.",
        "A score between 50 marks to 59 marks has been achieved.",
        "A score between 60 marks to 69 marks has been achieved.",
        "A score totaling 70 marks or above has been achieved."
    };

    string c2_crg1[6] = {
        "Fail.",
        "The reflective journal has been created, but fundamentally provides no insight into the lessons learned throughout development.",
        "The reflective journal provides a somewhat reflective account of development throughout the challenges. However, some critical insights and key areas may be missing.",
        "The reflective journal provides a good account of the development journey, providing a good breakdown of hurdles overcome throughout development. The journal also provides reflective insight into lessons learned throughout the completion of the challenges.",
        "A great reflective journal that provides a good breakdown of the development journey, along with a fantastic reflective discussion of the lessons learned and challenges overcome.",
        "An exceptional account of the development journey has been provided, along with a concise but comprehensive discussion of the lessons learned. The reflective journal provides great evidence of self-reflection regarding the key challenges and lessons learned throughout development."
    };

    Assessment assessment1(70, 30, "C1 The completion of the given programming challenges, and development of a portfolio.", "C2 A reflective journal on the development of a programming portfolio.", c1_crg1, c2_crg1);
    cout << "Assessment 1: \n";
    assessment1.enterMarks();
    assessment1.calculatePercentage();

    // Assessment 2
    string c1_crg2[6] = {
        "Fail",
        "A text-based game has been implemented, but this is either non-functional or lacks the required features.",
        "A text-based game has been implemented. Most of the required features are functional, but there may be significant bugs or errors in the gameplay. A basic game loop has been implemented with some level of interactivity.",
        "A text-based game has been implemented. The required features are functional and well-implemented. There are little to no bugs present throughout. A game loop has been implemented which features player interactivity.",
        "A text - based game has been delivered with all the required features.There are no bugs evident during gameplay.Interactivity is well - handled and robust, with special edge cases (such as invalid user input) handled.A game loop is present which is robust and has been well - implemented.",
        "A game has been delivered that is portfolio ready. All required features have been implemented. Alongside the other requirements for the criterion band, the game is polished and presented in a professional manner."
    };

    string c2_crg2[6] = {
        "Fail",
        "Little to no best practices are found throughout the code, and the code is not of an adequate quality. The intent of the code is largely unclear as a result.",
        "Some best practices are found throughout, and the code is of an acceptable quality. The intent of the code is somewhat understandable and may use comments to elucidate some parts.",
        "Good practice is found throughout the solution, and the code is of a good quality. The intent of the code is clear throughout. Comments are used throughout.",
        "Best practices are found throughout the code, and the code is of a great quality. The intent of the code is clear, and concise. Comments are used throughout where appropriate.",
        "The code is clear, concise, and of an industry standard. Best practices are used throughout, and the code has been developed with quality in mind."
    };

    string c3_crg2[6] = {
        "Fail",
        "Some programming techniques have been used, but these are either not appropriate for the challenge or are limited in their scope.",
        "Learned programming techniques have been used appropriately in parts, but other methods may be more appropriate.",
        "Generally, learned programming techniques have been well used in parts to build a good attempt to the solution.",
        "A broad range of learned programming techniques have been appropriately applied throughout to build a great attempt to the solution. Several advanced techniques have been used throughout.",
        "A fantastic solution to the problem has been supplied, and several programming techniques have been used to inform the industry - standard design of a solution. Several advanced techniques have been used throughout."
    };

    Assessment assessment2(60, 20, 20, "C1 Development of text-based game artefact", "C2 Code quality and best practices", "C3 Demonstration of broad range of programming techniques and applicability of learned techniques", c1_crg2, c2_crg2, c3_crg2);
    cout << "\nAssessment 2: \n";
    assessment2.enterMarks();
    assessment2.calculatePercentage();

    // Display results for both assessments
    cout << "--------------------------------\n";
    cout << "Your results!" << endl;

    // Assessment 1
    assessment1.displayResults();
    // Assessment 2
    assessment2.displayResults();

    // Overall percentage
    float overallPercentage = (assessment1.percentage + assessment2.percentage) / 2;
    cout << "--------------------------------\n";
    cout << "Overall percentage: " << overallPercentage << "%" << endl;

    return 0;
}