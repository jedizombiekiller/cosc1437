#include <iostream>
#include <vector>

using namespace std;

class Candy{
    int tastiness;
    int quantity;
    string flavor;
    float price;
    //idea for chocolate bar: melting point. also maybe beanboozled
    Candy(int taste, int quant, string flav, float pri){
        tastiness = taste;
        quantity = quant;
        flavor = flav;
        price = pri;
    }

    void eat(){
        if (quantity > 0){
            quantity -= 1;
            cout << "Yummy! You have " << quantity << " candy left." << endl;
        } else {
            cout << "You have no more candy!" << endl;
        }
    }
};


int main(){


    return 0;
}