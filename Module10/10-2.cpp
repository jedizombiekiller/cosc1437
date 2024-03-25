#include <iostream>

using namespace std;
int num;
int sum = 0;
int a = 0;
int b = 1;

int main(){
    cout << "What number? ";
    cin >> num;
    cout << a << ", " << b << ", ";
    for (int i = 2; i <= num; i++){
        sum = a + b;
        a = b;
        b = sum;
        cout << sum << ", ";
    }
    return 0;
}