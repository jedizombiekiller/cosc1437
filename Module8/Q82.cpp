#include <iostream>

using namespace std;

int age[20];
string name[20];
char grade[20];

int students;

bool isValidGrade(char letter){
    switch (letter){
        case 'A':
            return true;
        case 'B':
            return true;
        case 'C':
            return true;
        case 'D':
            return true;
        case 'F':
            return true;
        default:
            return false;
    }
}

int main() {
    //prompt user for amount of students
    cout << "How many students do you have?" << endl;
    cin >> students;

    for (int i = 0; i <= students; i++){
        //get name, age, and grade for each student
        cout << "What is the name of student " << i << "?" << endl;
        cin >> name[i];

        cout << "What is the age of student " << i << "?" << endl;
        cin >> age[i];
        while (age[i] < 0){
            cout << "Invalid age. What is the age of student " << i << "?" << endl;
            cin >> age[i];
        }

        cout << "What is the grade of student " << i << "?" << endl;
        cin >> grade[i];
        while (!isValidGrade(grade[i])){
            cout << "Invalid grade. What is the grade of student " << i << "?" << endl;
            cin >> grade[i];
        }
        //make sure age and grade make sense
    }
    cout << endl;
    for (int i = 0; i <= students; i++){
            cout << name[i] << "    ";
            cout << age[i] << "    ";
            cout << grade[i] << "    ";
            cout << endl;
    }

    return 0;
}