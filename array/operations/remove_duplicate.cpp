/*
  for development (auto compile and run)
  `ls *.cpp | entr -r -s "g++ remove_duplicate.cpp && ./a.out; rm a.out"`
*/
#include <iostream>
using namespace std;
void clearDuplicate(int arrArg[], int arrLeng);
void removeAt(int arrArg[], int arrLeng, int removeIndex);
void printArray(int arrArg[], int arrLeng);

int main()
{
  int arrLeng = 10;
  int arr[] = {2, 4, 2, 5, 3, 4, 5};
  cout << endl
       << "before array" << endl;
  printArray(arr, arrLeng);
  clearDuplicate(arr, arrLeng);
  cout << endl
       << "after array" << endl;
  printArray(arr, arrLeng);

  return 0;
}

void clearDuplicate(int arrArg[], int arrLeng)
{

  for (int i = 0; i < arrLeng; i++)
  {
    for (int j = i + 1; j < arrLeng; j++)
    {
      if (arrArg[i] == arrArg[j])
      {
        // cout << "remove at j: " << j << " i: " << i << endl;
        removeAt(arrArg, arrLeng, j);
      }
    }
  }
}

void removeAt(int arrArg[], int arrLeng, int removeIndex)
{
  for (int i = removeIndex; i < arrLeng - 1; i++)
  {
    arrArg[i] = arrArg[i + 1];
  }
  return;
}

void printArray(int arrArg[], int arrLeng)
{
  for (int i = 0; i < arrLeng; i++)
  {
    cout << arrArg[i] << ", ";
  }
  cout << endl;
  return;
}