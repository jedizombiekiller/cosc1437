#include <iostream>

using namespace std;

int main(){
    double celcius;
    double fahrenheit;

    cout << "What temperature is it in celcius?" << endl;
    cin >> celcius;
    fahrenheit = (celcius*(9/5.0)) + 32;
    cout << "Your temperature in fahrenheit is " << fahrenheit << " degrees" << endl;
    return 0;
}