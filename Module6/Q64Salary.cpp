#include <iostream>

using namespace std;

string name; //employee name
double salary; //annual salary
int rating; //1-4. 
double bonus; //a percent of annual salary

int main(){
    cout << "What is the employee's name?" << endl;
    cin >> name;

    cout << "What is their annual salary?" << endl;
    cin >> salary;

    cout << "What is their rating? (pick a number between 1-4)" << endl;
    cin >> rating;

    switch (rating){
        case 1:
            bonus = salary*0.25;
            break;
        case 2:
            bonus = salary*0.15;
            break;
        case 3:
            bonus = salary*0.10;
            break;
        case 4:
            bonus = 0;
            break;
    }

    cout << "Employee Name: " << name << endl;
    cout << "Annual Salary: $" << salary << endl;
    cout << "Performance Rating: " << rating << endl;
    cout << "Rating Bonus: $" << bonus << endl;
    return 0;
}