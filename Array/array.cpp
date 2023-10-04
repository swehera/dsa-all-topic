#include <bits/stdc++.h>
using namespace std;

int main() {

  /*
To declare an array in C++, you must specify the data type of the elements that the array will store and the size of the array. For example, the following code declares an array of 10 integers:
  */

  //Example:
    int            my_array[5];
//data-type   array-name[array-size]

/*
when we have to declared a an array then we don't need to
mention the [array-size]
*/
  //Example:
  int my_array2[] = {1,2,3,4,5,6,7,8,9,10}; // not mention the array size

/*
Once you have declared an array, you can access individual elements using their index. The index of the first element in an array is always 0, and the index of the last element is always one less than the size of the array. For example, the following code accesses the fifth element of the array my_array:
*/
  //Example: 
  int fifth_element = my_array2[4];
  cout << fifth_element << endl;


/*
if you want to indexing new value in the array then see the example
*/
  //Example:
  int array[6];
  array[0] = 1;
  array[1] = 4;
  array[2] = 1;
  array[3] = 1;
  array[4] = 6;
  array[5] = 8;


  cout << array[5] << endl;
  return 0;
}
