#include <iostream>

using namespace std;
int numIn;
double ratingTotal = 0.0000;
int songId = 0;

int main(){
    do {
        cout << "Enter rating for top song: " << endl;
        cin >> numIn;
        if (numIn >= 0){
            //cout << "Trigger" << endl;
            ratingTotal += numIn;
            songId++;
        }
    } while (numIn >= 0);
    //cout << "Songs: " << songId << endl;
    //cout << "Total Ratings: " << ratingTotal << endl;
    cout << "Average Star Value: " << ratingTotal/songId << endl;

    return 0;
}