#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void sortQuestionnaire(bool& answer1, bool& answer2, bool& answer3, bool& answer4, bool& answer5, bool& answer6, bool& answer7, bool& answer8, bool& answer9, bool& answer10,
                       string& studentStatus, string& citizen, string& insecurity, string& disabled, string& foodstamps, string& housing, int& age, int& household, int& dependents,
                       double& income);

string ICDResource(bool& answer1, bool& answer2, bool& answer3, bool& answer4, bool& answer5, bool& answer6, bool& answer7, bool& answer8, bool& answer9, bool& answer10,
                       string& studentStatus, string& citizen, string& insecurity, string& disabled, string& foodstamps, string& housing, int& age, int& household, int& dependents,
                       double& income);
string CAResource(bool& answer1, bool& answer2, bool& answer3, bool& answer4, bool& answer5, bool& answer6, bool& answer7, bool& answer8, bool& answer9, bool& answer10,
                       string& studentStatus, string& citizen, string& insecurity, string& disabled, string& foodstamps, string& housing, int& age, int& household, int& dependents,
                       double& income);
string SNAPResource(bool& answer1, bool& answer2, bool& answer3, bool& answer4, bool& answer5, bool& answer6, bool& answer7, bool& answer8, bool& answer9, bool& answer10,
                       string& studentStatus, string& citizen, string& insecurity, string& disabled, string& foodstamps, string& housing, int& age, int& household, int& dependents,
                       double& income);
string DISHResource(bool& answer1, bool& answer2, bool& answer3, bool& answer4, bool& answer5, bool& answer6, bool& answer7, bool& answer8, bool& answer9, bool& answer10,
                       string& studentStatus, string& citizen, string& insecurity, string& disabled, string& foodstamps, string& housing, int& age, int& household, int& dependents,
                       double& income);
string FinancialWellnesssResource(bool& answer1, bool& answer2, bool& answer3, bool& answer4, bool& answer5, bool& answer6, bool& answer7, bool& answer8, bool& answer9, bool& answer10,
                       string& studentStatus, string& citizen, string& insecurity, string& disabled, string& foodstamps, string& housing, int& age, int& household, int& dependents,
                       double& income);
string grantFinDevResource(bool& answer1, bool& answer2, bool& answer3, bool& answer4, bool& answer5, bool& answer6, bool& answer7, bool& answer8, bool& answer9, bool& answer10,
                       string& studentStatus, string& citizen, string& insecurity, string& disabled, string& foodstamps, string& housing, int& age, int& household, int& dependents,
                       double& income);
string scholarshipsResource(bool& answer1, bool& answer2, bool& answer3, bool& answer4, bool& answer5, bool& answer6, bool& answer7, bool& answer8, bool& answer9, bool& answer10,
                       string& studentStatus, string& citizen, string& insecurity, string& disabled, string& foodstamps, string& housing, int& age, int& household, int& dependents,
                       double& income);
string SEAFResource(bool& answer1, bool& answer2, bool& answer3, bool& answer4, bool& answer5, bool& answer6, bool& answer7, bool& answer8, bool& answer9, bool& answer10,
                       string& studentStatus, string& citizen, string& insecurity, string& disabled, string& foodstamps, string& housing, int& age, int& household, int& dependents,
                       double& income);
string LIResource(bool& answer1, bool& answer2, bool& answer3, bool& answer4, bool& answer5, bool& answer6, bool& answer7, bool& answer8, bool& answer9, bool& answer10,
                       string& studentStatus, string& citizen, string& insecurity, string& disabled, string& foodstamps, string& housing, int& age, int& household, int& dependents,
                       double& income);
string AEResource(bool& answer1, bool& answer2, bool& answer3, bool& answer4, bool& answer5, bool& answer6, bool& answer7, bool& answer8, bool& answer9, bool& answer10,
                       string& studentStatus, string& citizen, string& insecurity, string& disabled, string& foodstamps, string& housing, int& age, int& household, int& dependents,
                       double& income);
string TPResource(bool& answer1, bool& answer2, bool& answer3, bool& answer4, bool& answer5, bool& answer6, bool& answer7, bool& answer8, bool& answer9, bool& answer10,
                       string& studentStatus, string& citizen, string& insecurity, string& disabled, string& foodstamps, string& housing, int& age, int& household, int& dependents,
                       double& income);
string transResource(bool& answer1, bool& answer2, bool& answer3, bool& answer4, bool& answer5, bool& answer6, bool& answer7, bool& answer8, bool& answer9, bool& answer10,
                       string& studentStatus, string& citizen, string& insecurity, string& disabled, string& foodstamps, string& housing, int& age, int& household, int& dependents,
                       double& income);
string utilityResource(bool& answer1, bool& answer2, bool& answer3, bool& answer4, bool& answer5, bool& answer6, bool& answer7, bool& answer8, bool& answer9, bool& answer10,
                       string& studentStatus, string& citizen, string& insecurity, string& disabled, string& foodstamps, string& housing, int& age, int& household, int& dependents,
                       double& income);
string healthResource(bool& answer1, bool& answer2, bool& answer3, bool& answer4, bool& answer5, bool& answer6, bool& answer7, bool& answer8, bool& answer9, bool& answer10,
                       string& studentStatus, string& citizen, string& insecurity, string& disabled, string& foodstamps, string& housing, int& age, int& household, int& dependents,
                       double& income);
string homelessResource(bool& answer1, bool& answer2, bool& answer3, bool& answer4, bool& answer5, bool& answer6, bool& answer7, bool& answer8, bool& answer9, bool& answer10,
                       string& studentStatus, string& citizen, string& insecurity, string& disabled, string& foodstamps, string& housing, int& age, int& household, int& dependents,
                       double& income);
string childcareResource(bool& answer1, bool& answer2, bool& answer3, bool& answer4, bool& answer5, bool& answer6, bool& answer7, bool& answer8, bool& answer9, bool& answer10,
                       string& studentStatus, string& citizen, string& insecurity, string& disabled, string& foodstamps, string& housing, int& age, int& household, int& dependents,
                       double& income);


int main() {
    string name, major;
    string studentStatus, citizen,
        insecurity, disabled, foodstamps, housing;
    int age, household, dependents;
    double income;

    bool answer1,
        answer2,
        answer3,
        answer4,
        answer5,
        answer6,
        answer7,
        answer8,
        answer9,
        answer10;
    

    // statement, what do they provide, phone number, address, email, restrictions

    cout << "What is your full name?" << endl;
    getline(cin, name);
    cin.ignore(100, '\n');

    cout << "What is your major?" << endl;
    getline(cin, major);
    cin.ignore(100, '\n');

    // choices on website will be part time, full time, or not a student
    cout << "1. Are you a full-time or part-time student at Bunker Hill Community College?" << endl;
    getline(cin, studentStatus);
    cin.ignore(100, '\n');

    cout << "2. Are you a US citizen or a permanent resident?" << endl;
    getline(cin, citizen);
    cin.ignore(100, '\n');

    cout << "3. How old are you?" << endl;
    cin >> age;
    cin.ignore(100, '\n');

    cout << "4. How many people are in your household?" << endl;
    cin >> household;
    cin.ignore(100, '\n');

    cout << "5. How many dependents do you have?" << endl;
    cin >> dependents;
    cin.ignore(100, '\n');

    cout << "6. Are you disabled?" << endl;
    cin >> disabled;
    cin.ignore(100, '\n');

    cout << "7. Do you struggle with financial insecurity?";
    cin >> insecurity;
    cin.ignore(100, '\n');

    cout << "8. Do you use food stamps or struggle with financial insecurity? (SNAP)";
    cin >> foodstamps;
    cin.ignore(100, '\n');

    cout << "9. What is your annual income?" << endl;
    cin >> income;
    cin.ignore(100, '\n');

    cout << "10. Do you struggle with housing insecurity?" << endl;
    cin >> housing;
    cin.ignore(100, '\n');

    //Sorting Questionaire answers


    sortQuestionnaire(answer1, answer2, answer3, answer4, answer5, answer6, answer7, answer8, answer9, answer10,
        studentStatus, citizen, insecurity, disabled, foodstamps, housing, age, household, dependents,
        income);


    system("pause");
    return 0;

}

void sortQuestionnaire(bool& answer1, bool& answer2, bool& answer3, bool& answer4, bool& answer5, bool& answer6, bool& answer7, bool& answer8, bool& answer9, bool& answer10,
    string& studentStatus, string& citizen, string& insecurity, string& disabled, string& foodstamps, string& housing, int& age, int& household, int& dependents,
    double& income)
{
    if (studentStatus == "full time" || studentStatus == "part time") {
        answer1 = true;
    }
    else {
        answer1 = false;
    }
    if (citizen == "US citizen" || citizen == "us citizen" || citizen == "US Citizen" ||
        citizen == "Permanent resident" || citizen == "permanent resident" || citizen == "Permanent Resident") {
        answer2 = true;
    }
    else {
        answer2 = false;
    }

    if (disabled == "yes" || disabled == "Yes" || disabled == "YES") {
        answer6 = true;
    }
    else {
        answer6 = false;
    }

    if (insecurity == "yes" || insecurity == "Yes" || insecurity == "YES") {
        answer7 = true;
    }
    else {
        answer7 = false;
    }

    if (foodstamps == "yes" || foodstamps == "Yes" || foodstamps == "YES") {
        answer8 = true;
    }
    else {
        answer8 = false;
    }

    if (housing == "yes" || housing == "Yes" || housing == "YES") {
        answer10 = true;
    }
    else {
        answer10 = false;
    }

}