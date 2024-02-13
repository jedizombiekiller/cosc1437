#include <iostream>
using namespace std;
char charIn;
int lefties = 0;
int righties = 0;

int main(){
    while (charIn != 'X'){
        cout << "Enter an L if you are left-handed, an R if you are right-handed or X to quit: ";
        cin >> charIn;
        if (charIn == 'X') break;

        if (charIn == 'R') righties++;
        if (charIn == 'L') lefties++;
    }
    cout << "Number of left-handed students: " << lefties << endl;
    cout << "Number of right-handed students: " << righties << endl;
    return 0;
}