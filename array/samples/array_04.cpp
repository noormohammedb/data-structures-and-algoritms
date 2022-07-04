/*
  for development (auto compile and run)
  `ls *.cpp | entr -r -s "g++ array_04.cpp && ./a.out; rm a.out"`
*/
#include <iostream>
using namespace std;

int main()
{
  int arr1[10], i = 0, n = 0;

  cout << "Enter Array Length : ";
  cin >> n;

  cout << "Enter Array Elements : " << endl;
  for (i = 0; i < n; i++)
  {
    cin >> arr1[i];
  }

  cout << "Array Elements are : " << endl;
  for (i = 0; i < n; i++)
  {
    cout << i << ". " << arr1[i] << endl;
  }

  return 0;
}