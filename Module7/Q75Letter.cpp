#include <iostream>
using namespace std;

int main(){
    for (int i = 1; i <=5; i++){ //repeat 5 times
        if (i % 2 == 1){ //if Even
            for (int o = 0; o < 3; o++){
                cout << "*";
            }
            cout << endl;
        } else {
            cout << "*" << endl;
        }
    } 

    return 0;
}