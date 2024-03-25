#include <iostream>

using namespace std;
int num;
int fact = 1;


int main(){
    cout << "What number? ";
    cin >> num;

    for (int i = 1; i <= num; i++){
        fact *= i;
    }
    cout << "The factorial is " << fact << endl;

    return 0;
}