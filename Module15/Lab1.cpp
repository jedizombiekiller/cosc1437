#include <iostream>

using namespace std;

void doubleInt(int* value){
    *value  *= 2;
}

int main(){
    int number = 5;
    int* ptr = &number;
    cout << number << endl;
    doubleInt(ptr);
    cout << number << endl;

    return 0;
}