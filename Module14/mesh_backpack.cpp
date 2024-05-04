#include <iostream>
#include <vector>

using namespace std;

class Backpack{
    string material;
    vector<string> contents;
    double maxWeight;
    string color;
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

class MeshBackpack : Backpack{
    float lifespan;
    float meshDensity;
    public:
        MeshBackpack(float span, float density){
            lifespan = span;
            meshDensity = density;
        }
};

class HikingBackpack : Backpack{
    float durability;
    int waterAmt;

    public:
        HikingBackpack(float dur, int water){
            durability = dur;
            waterAmt = water;
        }
        int getWater(){
            return waterAmt;
        }
        void addWater(int water){
            waterAmt += water;
        }
        void drinkWater(int water){
            waterAmt -= water;
        }
        void damage(float strength){
            durability -= strength
        }
};

class CheapBackpack : Backpack{
    float price;
    public:
        CheapBackpack(float cost){
            if (cost >= 10){
                cout << "too expensive" << endl;
            } else {
                price = cost;
            }
        }
};

int main(){


    return 0;
}