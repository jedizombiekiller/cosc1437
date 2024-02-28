#include <iostream>

using namespace std;

int input;

int sums(int num){
    int total = 0;
    for (int i = 1; i <= num; ++i) {
        total += i;
    }
    return total;
}

int products(int num) {
    int total = 1;
    for (int i = 1; i <= num; ++i) {
        total *= i;
    }
    return total;
}

int main(){
    //repeat until value is 0
    do{
        cout << "Enter a positive integer or 0 to quit: ";
        cin >> input;
        cout << sums(input) << endl;
        cout << products(input) << endl;
    }while (input != 0);

    return 0;
}