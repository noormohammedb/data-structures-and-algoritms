/*
  for development (auto compile and run)
  `ls *.cpp | entr -r -s "g++ insert_at_index.cpp && ./a.out; rm a.out"`
*/
#include <iostream>
using namespace std;

int main()
{
  int addAfter = 2, addNum = 99, arrLeng = 10, temp = 0;
  int arr[arrLeng] = {10, 20, 30, 40};

  cout << endl
       << "before array" << endl;
  for (int i = 0; i < arrLeng; i++)
  {
    cout << arr[i] << ", ";
  }

  for (int i = arrLeng; i >= addAfter; i--)
  {
    arr[i + 1] = arr[i];
    arr[i] = 0;
  }

  arr[addAfter] = addNum;

  cout << endl
       << "after array" << endl;
  for (int i = 0; i < arrLeng; i++)
  {
    cout << arr[i] << ", ";
  }

  return 0;
}