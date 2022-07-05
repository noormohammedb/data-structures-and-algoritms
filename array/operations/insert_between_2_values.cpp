/*
  for development (auto compile and run)
  `ls *.cpp | entr -r -s "g++ insert_between_2_values.cpp && ./a.out; rm a.out"`
*/
#include <iostream>
using namespace std;

int findIndex(int arrArg[], int arrLeng, int value)
{

    for (int i = 0; i < arrLeng; i++)
    {
        if (arrArg[i] == value)
            return i;
    }
    cout << endl
         << "Not found " << value << endl;
    exit(0);
}

void addAtIndex(int arrArg[], int arrLeng, int addValue, int addIndex)
{
    for (int i = arrLeng; i >= addIndex; i--)
    {
        arrArg[i + 1] = arrArg[i];
        arrArg[i] = 0;
    }
    arrArg[addIndex] = addValue;
    return;
}

void printArray(int arrArg[], int arrLeng)
{
    for (int i = 0; i < arrLeng; i++)
    {
        cout << arrArg[i] << ", ";
    }
    cout << endl;
}

int main()
{
    int arrLeng = 10, insertAfter = 8, insertBefore = 1, insertNum = 99;
    int beforeIndex, afterIndex, insertIndex = 0;
    int arr[arrLeng] = {2, 5, 8, 1, 4};

    cout << endl
         << "array beofre" << endl;
    printArray(arr, arrLeng);

    afterIndex = findIndex(arr, arrLeng, insertAfter);
    beforeIndex = findIndex(arr, arrLeng, insertBefore);
    insertIndex = ((beforeIndex - afterIndex) / 2) + afterIndex + 1;

    cout << endl
         << "afterIndex: " << afterIndex << endl
         << "beforeIndex: " << beforeIndex << endl
         << "insertIndex: " << insertIndex << endl;

    addAtIndex(arr, arrLeng, insertNum, insertIndex);

    cout << endl
         << "array after " << endl;
    printArray(arr, arrLeng);

    return 0;
}
