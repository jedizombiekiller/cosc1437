#include <iostream>
#include <vector>
using namespace std;

class Sandwich{
    private:
        float price;
        vector<string> ingredients;
        string breadType;
        vector<string> condiments;
        float calories;
        int percentLeft;
        bool eaten;

    public:
        Sandwich(float pri, vector<string> ing, string bread, vector<string> cond){
            price = pri;
            ingredients = ing;
            breadType = bread;
            condiments = cond;
            percentLeft = 100;
            eaten = false;

            for (int i = 0; i < ingredients.size(); i++){
                calories += 3;
            }
        }

        void takeBite(bool largeBite){
            if (!eaten){
            // takes away more if it's a large bite
                if (largeBite){
                    percentLeft -= 10;
                } else {
                    percentLeft -= 5;
                }

                //checks if it's been entirely eaten
                if (percentLeft <= 0){
                    percentLeft = 0;
                    eaten = true;
                    cout << "Sandwich is eaten." << endl;
                }
            } else {
                cout << "There is no sandwich left." << endl;
            }
        }

        void addCondiment(string cond){
            condiments.push_back(cond);
        }
};

int main(){
    
    return 0;
}