#include <iostream>

using namespace std;

int main(){
    int num1 = 5;
    int num2 = 9;
    int* ptr1 = &num1;
    int* ptr2 = &num2;
    int** ptr_to_ptr = &ptr1;

    cout << ptr1 << endl;
    cout << ptr_to_ptr << endl;
    ptr_to_ptr = &ptr2;

    cout << endl;
    cout << ptr2 << endl;
    cout << ptr_to_ptr << endl;
    return 0;
}