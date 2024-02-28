#include <iostream>

using namespace std;

int numbers[4];

void reverse(int arr[4]){
    for (int i = 4; i >= 0; i--){
        cout << numbers[i] << endl;
    }
}

int main(){
    cout << "Entert #1: ";
    cin >> numbers[0];
    cout << "Entert #2: ";
    cin >> numbers[1];
    cout << "Entert #3: ";
    cin >> numbers[2];
    cout << "Entert #4: ";
    cin >> numbers[3];
    cout << "Entert #5: ";
    cin >> numbers[4];

    cout << "Original contents of array:" << endl;
    for (int i = 0; i <= 4; i++){
        cout << numbers[i] << endl;
    }
    cout << "Reversed contents of array:" << endl;
    reverse(numbers);

    return 0;
}