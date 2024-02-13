#include <iostream>

using namespace std;

int num1 = -50;
int num2 = 53;
int num3 = 78;
int high;
int mid;
int low;

int main() {
    /*
    cout << "number 1" << endl;
    cin >> num1;

    cout << "number 2" << endl;
    cin >> num2;

    cout << "number 3" << endl;
    cin >> num3;
    */
   
    //if num1 is higher than num2, check if num1 is higher than num3.
    //if num1 is higher than num3, set to "high." else, set to mid. set num3 to high and num2 to low
    if (num1 > num2){
        if (num1 > num3){
            high = num1;
            if (num2 > num3){
                mid = num2;
                low = num3;
            } else{
                mid = num3;
                low = num2;
            }
        }else{
            high = num3;
            mid = num1;
            low = num2;
        }
    //else (num2 is higher), check if num2 is higher than num3.
    //if num2 is higher than num3, set to "high." else, set to mid. set num3 to high and num1 to low
    } else {
        if (num2 > num3){
            high = num2;
            if (num1 > num3){
                mid = num1;
                low = num3;
            } else{
                mid = num3;
                low = num1;
            }
        }else{
            high = num3;
            mid = num2;
            low = num1;
        }
    }
    cout << "Your numbers in order are:" << endl;
    cout << high << endl;
    cout << mid  << endl;
    cout << low  << endl;
    return 0;
}