#include <bits/stdc++.h>
using namespace std;

int main() {

  int array[] = {1,2,3,4};

  //now find for array size
  cout << "Array size: " << sizeof(array) << endl;

  //now find the length of this array
  cout << "Array Length: " << sizeof(array) / sizeof(array[0]) << endl;
  //because every elements in array have same size 
  
  return 0;
}
