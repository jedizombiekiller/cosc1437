#include <iostream>
#include <vector>

using namespace std;

/*
First, pass in an array,
get a variable that is the sum
add the value of the last element to the sum
delete the last element
*/

int sum;
vector<int> nums = {1, 2, 3};

int vectorSum(const vector<int>& numbers){
    if (numbers.size() == 0){
        return sum;
    } else {
        // returns the first number, then gives vector sum the array minus the first number
        return numbers.front() + vectorSum(vector<int>(numbers.begin() + 1, numbers.end()));
    }
}

int main(){
    sum = vectorSum(nums);
    cout << "Sum is " << sum << endl;
    return 0;
}