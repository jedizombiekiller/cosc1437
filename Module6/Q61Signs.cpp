#include <iostream>

using namespace std;

static double MIN_PRICE = 35.00;
string message;
char yon;
bool oak = false;
bool gold = false;
double price = 0.00;

int main(){
    //gets the sign message
    cout << "What is the message you want to print?" << endl;
    cin >> message;
    //asks for oak instead of pine
    cout << "Do you want to use oak instead of pine for $20? (Enter y or n)" << endl;
    cin >> yon;
    while (yon != 'y' || yon != 'n')
    {
        if (yon == 'n'){
            break;
        } else if (yon == 'y'){
            oak = true;
            break;
        } else{
            cout << "Invalid Input, please try again." << endl;
        }
        cout << "Do you want to use oak instead of pine for $20? (Enter YES or NO in caps)" << endl;
        cin >> yon;
    }
    //gold leaf lettering instead
    cout << "Do you want to use gold-leaf lettering instead of black and white for $15? (Enter y or n)" << endl;
    cin >> yon;
    while (yon != 'y' || yon != 'n')
    {
        if (yon == 'n'){
            break;
        } else if (yon == 'y'){
            gold = true;
            break;
        } else{
            cout << "Invalid Input, please try again." << endl;
        }
        cout << "Do you want to use gold-leaf lettering instead of black and white for $15? (Enter y or n)" << endl;
        cin >> yon;
    }
    //calculates base price
    price = 35.00;
    for (int i = 0; i < message.length(); i++){
        //cout << i << endl;
        if (i > 5){
            price += 4;
        }
    }
    //the rest of the price
    if (oak) price += 20;
    if (gold) price += 15;
    //prints the price
    cout << "Your total price is $" << price << endl;

    return 0;
}