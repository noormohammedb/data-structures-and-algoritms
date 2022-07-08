/*
  for development (auto compile and run)
  `ls *.cpp | entr -r -s "g++ rotate_right_02.cpp && ./a.out; rm a.out"`
*/
#include <iostream>
using namespace std;
void rotateArray(int arrArg[], int arrLeng, int rotateBy);
void rotateLeft(int arrArg[], int arrLeng, int rotateBy);
void rotateRight(int arrArg[], int arrLeng, int rotateBy);
void printArray(int arrArg[], int arrLeng);

int main()
{
    int arr[] = {2, 5, 8, 1, 4};
    int arrleng, rotateBy = 9;
    arrleng = sizeof(arr) / sizeof(arr[0]);

    cout
        << "\n\narray length: " << arrleng
        << ", rotate by: " << rotateBy;

    cout << endl
         << "array beofre";
    printArray(arr, arrleng);

    rotateArray(arr, arrleng, rotateBy);
    printArray(arr, arrleng);

    return 0;
}

void rotateArray(int arrArg[], int arrLeng, int rotateBy)
{
    if (rotateBy > 0)
    {
        rotateBy > arrLeng ? rotateBy -= arrLeng : 1;
        rotateRight(arrArg, arrLeng, rotateBy);
    }
    else
    {
        rotateBy = -rotateBy;

        rotateBy > arrLeng ? rotateBy -= arrLeng : 1;
        rotateLeft(arrArg, arrLeng, rotateBy);
    }
}

void rotateLeft(int arrArg[], int arrLeng, int rotateBy)
{
    int i, arrTmp[rotateBy];

    for (i = 0; i < rotateBy; i++)
    {
        arrTmp[i] = arrArg[i];
    }

    for (i = 0; i < arrLeng; i++)
    {
        arrArg[i] = arrArg[rotateBy + i];
    }

    for (i = arrLeng - rotateBy; i < arrLeng; i++)
    {
        arrArg[i] = arrTmp[i - (arrLeng - rotateBy)];
    }
}

void rotateRight(int arrArg[], int arrLeng, int rotateBy)
{
    int i, arrTmp[rotateBy];

    for (i = 0; i < rotateBy; i++)
    {
        arrTmp[i] = arrArg[arrLeng - 1 - i];
    }

    for (i = 0; i < arrLeng - rotateBy; i++)
    {
        arrArg[arrLeng - 1 - i] = arrArg[arrLeng - 1 - rotateBy - i];
    }

    for (i = arrLeng - rotateBy; i < arrLeng; i++)
    {
        arrArg[i - (arrLeng - rotateBy)] = arrTmp[arrLeng - 1 - i];
    }
}

void printArray(int arrArg[], int arrLeng)
{
    cout << endl;
    for (int i = 0; i < arrLeng; i++)
    {
        cout << arrArg[i] << ", ";
    }
    cout << endl;
}