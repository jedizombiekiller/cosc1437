#include <iostream>

using namespace std;
float bat[7];
float avg;

int main(){
    for (int i = 0; i <= 7; i++){
        cout << "Enter a batting average: ";
        cin >> bat[i];
    }
    for (int i = 0; i < 8; i++){
        cout << bat[i] << endl;
        avg = avg + bat[i];
    }
    avg = avg/8;
    
    for (int i = 0; i <= 7 - 1; i++){
        for (int j = 0; j < 7 - i - 1; j++){
            if (bat[j] > bat[j + 1]) {
                swap(bat[j], bat[j + 1]); 
            }
        }
    }
    cout << "Minimum batting average is " << bat[0] << endl;
    cout << "Maximum batting average is " << bat[7] << endl;
    cout << "Average batting average is " << avg << endl;
    return 0;
}