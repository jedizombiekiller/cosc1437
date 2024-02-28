#include <iostream>

using namespace std;

string seatChart[4][4];
int arrSize = 0;
int smalSize = 0;

void assignSeat(string seats[4][4], string name, int x, int y){
    if (x > 3 || y > 3){
        cout << "OUT OF FUCKING RANGE" << endl;
    } else if (seats[x][y] != "-") {
        cout << "FUCK YOU" << endl;
    } else {
        seats[x][y] = name;
    }
}

void printChart(string seats[4][4]){
    for (int i = 0; i < arrSize; i++){
        for (int j = 0; j < smalSize; j++){
            cout << seatChart[i][j] << "    ";
        }
        cout << endl;
    } 
}

/*
int findEmptySeat(string seats[4][4]){ //i don't know how to get it to return an array
    int numReturn[0][0];
    for (int i = 0; i < arrSize; i++){
        for (int j = 0; j < smalSize; j++){
            if (seats[i][j] == "-"){
                return numReturn;
            }
        }
    } 
}
*/

int main(){
    arrSize = sizeof(seatChart)/sizeof(seatChart[0]);
    smalSize = sizeof(seatChart[0])/sizeof(seatChart[0][0]);
    //sets everything to dash
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            seatChart[i][j] = "-";
        }
    } 

    assignSeat(seatChart, "Hank", 2, 3);
    assignSeat(seatChart, "Marie", 2, 3);
    assignSeat(seatChart, "Walter", 1, 3);
    assignSeat(seatChart, "Jesse", 4, 2);
    //printing
    printChart(seatChart);
    return 0;
}