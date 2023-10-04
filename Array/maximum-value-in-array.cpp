#include <bits/stdc++.h>
using namespace std;

int main() {
//Find the maximum value out of all the elements in the array

  int array[] = {1,5,8,10,18,6,7};
  int max = array[0];
  int size = sizeof(array) / sizeof(array[0]);

  for(int i = 0; i < size; i++) {
    if(array[i] > max) {
      max = array[i];
    }
  }

  cout << "The maximum number in array: " << max ;
  


  
  return 0;
}
