#include <iostream>

using namespace std;

void discount(){
    cout << "You are pre-registered and qualify for a 5% discount." << endl;
}
void noDiscount(){
    cout << "Sorry, you did not pre-register and do not qualify for a 5% discount." << endl;
}

int main(){
    char ans;
    cout << "Did you preregister? Enter Y or N: ";
    cin >> ans;

    if (ans == 'Y'){
        discount();
    } else if (ans == 'N'){
        noDiscount();
    }

    return 0;
}