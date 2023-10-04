#include <bits/stdc++.h>
using namespace std;

int main() {

  int array[] = {2,6,8,10};
  int size = sizeof(array) / sizeof(array[0]);
  int sum = 0;

  for(int i = 0; i < size; i++) {
   // sum = array[i] + sum;
      sum+= array[i];
  }

  cout << sum << endl;

  

  return 0;
}
