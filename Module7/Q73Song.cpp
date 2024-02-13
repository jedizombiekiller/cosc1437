#include <iostream>

using namespace std;
int numIn;
double ratingTotal = 0.0000;
int songId = 0;

int main(){
    cout << "Enter rating for top song: " << endl;
    cin >> numIn;
    for (numIn >= 0; numIn + 0;) {
        if (numIn >= 0){
            //cout << "Trigger" << endl;
            ratingTotal += numIn;
            songId++;
        }else {
            break;
        }
        cout << "Enter rating for top song: " << endl;
        cin >> numIn;
    }
    cout << "Songs: " << songId << endl;
    cout << "Total Ratings: " << ratingTotal << endl;
    cout << "Average Star Value: " << ratingTotal/songId << endl;
    
    return 0;
}