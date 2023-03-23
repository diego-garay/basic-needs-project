#include <iostream>
#include <string>

using namespace std;

void questionnaire() {
    string name, major;

    cout << "Enter name: " << endl;
    cin >> name;
    cin.ignore(100, '\n');

    cout << "Enter major: " << endl;
    cin >> major;
    cin.ignore(100, '\n');
} 

int main() {
    // ask for name, age, income, us citizen, home address
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

    cout << "7. Do you struggle with financial insecurity?" << endl;
    cin >> insecurity;
    cin.ignore(100, '\n');

    cout << "8. Do you use food stamps or struggle with financial insecurity? (SNAP)" << endl;    
    cin >> foodstamps;
    cin.ignore(100, '\n');

    cout << "9. What is your annual income?" << endl;
    cin >> income;
    cin.ignore(100, '\n');

    cout << "10. Do you struggle with housing insecurity?" << endl;
    cin >> housing;
    cin.ignore(100, '\n');

 //Sorting Questionaire answers

 if(studentStatus == "full-time" || studentStatus == "part-time") {
        answer1 = true;
    } else {
        answer1 = false;
    }
if(citizen == "US citizen" || citizen == "us citizen" || citizen == "US Citizen" || 
    citizen = "Permanent resident" || citizen == "permanent resident" || citizen == "Permanent Resident") {
        answer2 = true;
    } else {
        answer2 = false;
    }

if(disabled == "yes" || disabled == "Yes" || disabled == "YES") {
        answer6 = true;
    } else {
        answer6 = false;
    }

    if(insecurity == "yes" || insecurity == "Yes" || insecurity == "YES") {
        answer7 = true;
    } else {
        answer7 = false;
    }

    if(foodstamps == "yes" || foodstamps == "Yes" || foodstamps == "YES") {
        answer8 = true;
    } else {
        answer8 = false;
    }

    if(housing == "yes" || housing == "Yes" || housing == "YES") {
        answer10 = true;
    } else {
        answer10 = false;
    }