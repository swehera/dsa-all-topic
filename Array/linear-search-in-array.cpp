#include <bits/stdc++.h>
using namespace std;

int main() {

/*
Linar Search : if a given element is present in the array or not. If it is not present then return -1 else return index;
*/

  int array[] = {4,5,8,9,8,10,8,18,20};
  int key = 18;
  int size = sizeof(array) / sizeof(array[0]);
  int ans = -1;

  for(int i = 0; i < size; i++) {
    if(array[i] == key) {
      ans=i;
      break; // for not checking all the array if we find the answer, then this break statement is work and stop the loop;
    }
  }
  cout << "Index Number: " << ans << endl;

  

  
  return 0;
}
