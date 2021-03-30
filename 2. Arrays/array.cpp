#include <iostream>
using namespace std;

int main () {

   // size of array
   int n;
   cout << "Enter size of the array : ";
   cin >> n;

   // Initializing Array
   int arr[n];

   cout << "Enter elements in the array : " << endl;
   for(int i=0; i<n; i++){
      cin >> arr[i];
   }

   // Displaying the array
   cout << "The elements of the array are : ";
   for(int i=0; i<n; i++){
      cout << arr[i] << " ";
   }
   return 0;
}
