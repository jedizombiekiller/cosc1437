#include <iostream>

using namespace std;
double num1;
double num2;

double sum(double one, double two){
    return one + two;
}

double difference(double one, double two){
    return one - two;
}

double product(double one, double two){
return one * two;
}

int main(){
    cout << "Enter first numeric value: ";
    cin >> num1;
    cout << "Enter second numeric value: ";
    cin >> num2;

    cout << "Sum is: " << sum(num1, num2) << endl;
    cout << "Difference is: " << difference(num1, num2) << endl;
    cout << "Product is: " << product(num1, num2) << endl;

    return 0;
}