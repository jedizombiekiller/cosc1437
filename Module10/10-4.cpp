#include <iostream>

using namespace std;

int arr[] = {1, 4, 5, 8, 10, 15, 17, 21, 27, 28, 35};
int main(){
   int low = 0;
   int endArr = end(arr)-begin(arr);
   int high = endArr-1;
   int mid; //= arr[(0+endArr)/2];
   //cout << low << " " << high << " " << mid << endl;
   int input = 27;
   
   cout << "Input number to look for: ";
   cin >> input;

   while (low <= high){
      //mid = (low + high) / 2;
      mid = low + (high - low) / 2;

      if (arr[mid] == input) {
         cout << "Found at: " << mid << endl;
         return 0;
      }
      else if (arr[mid] > input){
         low = mid - 1;
      }
      else if (arr[mid] < input){
         low = mid + 1;
      }
   }
   
   cout << "Element not found." << endl;
   return 0;
}