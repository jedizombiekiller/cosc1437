#include <iostream>

using namespace std;

int num1;
int num2;
char sym; //symbol for math
double result;

double doMath(int one, int two, char op){
    switch (op){
        case '+':
            return one + two;
        case '-':
            return one - two;
        case '*':
            return one * two;
        case '/':
            return one / two;
        case '%':
            return one % two;
        default:
            return -1;
    }
}

int main(){
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "Enter an operator (+.-.*,/,%): ";
    cin >> sym;
    cout << num1 << endl;
    cout << sym << endl;
    cout << num2 << endl;
    cout << "=" << endl;
    cout << doMath(num1, num2, sym) << endl;

    return 0;
}
