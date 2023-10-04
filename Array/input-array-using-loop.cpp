#include <bits/stdc++.h>
using namespace std;

int main() {

  char vowels[5];

  for(int i=0; i < 5; i++) {
    cout << "Enter vowels: " ;
    cin >> vowels[i];  //store data in the vowels array 
  }

  for(int i=0; i < 5; i++) {
    cout << vowels[i] << " ";
  }

  


  // for each loop
  for(char &element:vowels) {
    cout << endl;
    cout << "Enter again: ";
    cin >> element;
  }
  for(int j = 0; j < 5; j++) {
    cout << vowels[j] << " ";
  }
  /*   ------Note------
In for each loop we have a two different type of variable like here,
element and vowels now the intresting 
thing is to using &element we got the same array memory. That means if now we store something in element variable
then the data is store in the same vowels array location memory.
*/
  
  return 0;
}
