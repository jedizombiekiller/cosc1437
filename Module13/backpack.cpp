#include <iostream>
#include <vector>

using namespace std;

class Backpack{
    string material;
    vector<string> contents;
    double maxWeight;
    public:
        Backpack(string mat, vector<string> cont, double max){
            material = mat;
            contents = cont;
            maxWeight = max;
        }
        
        void storeObject(string obj){
            contents.push_back(obj);
        }
        void removeObject(string obj){
            for (int i =0; i < contents.size(); i++){
                if (contents[i] == obj){
                    contents.erase(contents.begin()+i);
                    i = contents.size();
                }
            }
        }
};

int main(){


    return 0;
}