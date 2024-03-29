#include <iostream>
#include <vector>
using namespace std;

vector<int> nums = {1,3,5,7,9,11,13};

bool findElement(const vector<int>& numbers, int target, int index){
    if (numbers[index] == target){
        return true;
    } else {
        if (index <= numbers.size()){
            return findElement(numbers, target, index + 1);
        } else {
            return false;
        }
    }
}

int main(){
    bool found = findElement(nums, 3, 0);
    if (found){
        cout << "Element found" << endl;
    } else {
        cout << "Element not found" << endl;
    }
    return 0;
}