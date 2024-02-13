#include <iostream>

using namespace std;

string name; //employee name
int score; //productivity score
int transactions; //
double transDollars; //
int shifts;//
double bonus; //a percent of annual salary

int main(){
    cout << "What is the employee's name?" << endl;
    cin >> name;

    cout << "How many shifts did they work?" << endl;
    cin >> shifts;

    cout << "How many transactions did they make?" << endl;
    cin >> transactions;

    cout << "How much did they make from their transactions?" << endl;
    cin >> transDollars;

    //calculate score
    score = transDollars/transactions;
    score /= shifts;
    //calculate bonus
    if (score <= 30){
        bonus = 50;
    } else if (score < 69){
        bonus = 75;
    } else if (score < 199){
        bonus = 100;
    } else {
        bonus = 200;
    }

    cout << "Employee Name: " << name << endl;
    cout << "Performance Score: " << score << endl;
    cout << "Rating Bonus: $" << bonus << endl;
    return 0;
}