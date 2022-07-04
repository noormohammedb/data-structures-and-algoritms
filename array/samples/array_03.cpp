/*
  for development (auto compile and run)
  `ls *.cpp | entr -r -s "g++ array_03.cpp && ./a.out; rm a.out"`
*/
#include <iostream>
using namespace std;

int main()
{
  int arr1[] = {4, 2, 5, 6, 0}, i = 0;

  cout << "\n\n&arr1 = " << &arr1 << ", arr1 = " << arr1 << ", *arr1 = " << *arr1 << endl;
  cout << "&i =    " << &i << ",    i = " << i << ", *i =  can't" << endl;

  cout << "*( arr1 + 2 ) = " << *(arr1 + 2) << endl;
  cout << "*( arr1 + i ) = " << *(arr1 + i) << endl;

  // method 1
  cout << "\narr1 elemets are:" << endl;
  for (i = 0; i < 5; i++)
  {
    cout << arr1[i] << ", ";
  }

  // method 2
  cout << "\narr1 elemets are:" << endl;
  for (i = 0; i < 5; i++)
  {
    cout << i[arr1] << ", ";
  }

  return 0;
}