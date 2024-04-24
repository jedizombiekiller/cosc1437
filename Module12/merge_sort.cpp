#include <iostream>
#include <vector>

using namespace std;

void merge(int arr[], int left, int mid, int right) {
    // for every element in left side, compare to right side?
    
  // ... your code to merge two sorted sub-arrays ...
}

void mergeSort(int arr[], int left, int right) {
  if (left < right) {
    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);  // Sort left half
    mergeSort(arr, mid + 1, right);  // Sort right half
    merge(arr, left, mid, right);  // Merge sorted halves
  }
}

int main(){
    int numbers[] = {13, 39, 24, 11, 6, 5, 10, 74, 55, 1, 32, 88};

    mergeSort(numbers, 0, 12);

    return 0;
}