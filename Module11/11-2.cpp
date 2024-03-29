#include <iostream>
#include <vector>

using namespace std;

/*
First, pass in an array,
print the array backwards at the end
    get last element and add it to the end
    pass in the current array minus one from the end
remove the original values
*/

vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

void reverseVector(vector<int>& numbers, int start, int end){
    if (start >= end){
        return;
    } else {
        //int temp = numbers.back();
        //numbers.back() = numbers.front();
        //numbers.front() = temp;
        swap(numbers[start], numbers[end]);
        //vector<int> subNum = vector<int>(numbers.begin() + 1, numbers.end());
        reverseVector(nums, start+1, end-1);
    }
}

int main(){
    reverseVector(nums, 0, nums.size() - 1);
    cout << "Reverse is ";
    for (auto i : nums){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}