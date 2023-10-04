#include <bits/stdc++.h>
using namespace std;

/*

There are two main ways to traverse through an array in C++: using a for loop or using a range-based for loop.

Using a for loop
To traverse through an array using a for loop, you can use the following steps:

  1)Declare a loop variable (i) and initialize it to 0.
  2)Write a for loop condition that checks if i is less than the size   of the array.
  3)Inside the for loop, access the current array element using the i   variable.
  4)Increment the i variable by 1.
The following code shows how to traverse through an array of integers using a for loop:
*/

int main() {

  int arr[5] = {1,2,3,4,5};

// Traverse through the array using a for loop
  for(int i =0; i < sizeof(arr) / sizeof(arr[0]); i++) {
    cout << arr[i] << " for Index: "<< i << endl;
  }

  
  return 0;
}
