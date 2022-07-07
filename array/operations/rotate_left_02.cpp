/*
  for development (auto compile and run)
  `ls *.cpp | entr -r -s "g++ rotate_left_02.cpp && ./a.out; rm a.out"`
*/
#include <iostream>
using namespace std;
void printArray(int arrArg[], int arrLeng);
void rotateArray(int arrArg[], int arrLeng, int rotateBy);
void rotateLeft(int arrArg[], int arrLeng, int rotateBy);
// void rotateGeneric(int arrArg[], int arrLeng, int rotateBy);

int main()
{
    int arr[] = {2, 5, 8, 1, 4};
    int arrleng, rotateBy = 2, temp, j = 0;
    // int arrleng, rotateBy = -3, temp, j = 0;
    arrleng = sizeof(arr) / sizeof(arr[0]);

    cout
        << "\n\narray length: " << arrleng
        << ", rotate by: " << rotateBy;

    cout << endl
         << "array beofre" << endl;
    printArray(arr, arrleng);

    rotateArray(arr, arrleng, rotateBy);
    // rotateGeneric(arr, arrleng, rotateBy);

    // cout << endl
    //      << "array beofre" << endl;
    // printArray(arr, arrleng);

    return 0;
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

void rotateArray(int arrArg[], int arrLeng, int rotateBy)
{
    if (rotateBy > arrLeng)
        rotateBy -= arrLeng;
    if (rotateBy > 0)
    {
        rotateLeft(arrArg, arrLeng, rotateBy);
    }
    else
    {
        // rotateBy = -rotateBy;
        // rotateLeft(arrArg, arrLeng, rotateBy);
        cout << endl
             << "rotate right : "
             << -rotateBy;
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
        // cout << endl
        //      << "i, arLeng, rotateBy, i - (arrLeng - rotateBy): "
        //      << i << ", " << arrLeng << ", " << rotateBy << ", " << i - (arrLeng - rotateBy) << endl;
    }

    printArray(arrArg, arrLeng);
    // printArray(arrTmp, rotateBy);
}

/*
void rotateGeneric(int arrArg[], int arrLeng, int rotateBy)
{
    int arStart, arEnd;
    if (rotateBy > 0)
    {
        arStart = 0;
        arEnd = arrLeng;
    }
    else
    {
        arStart = arrLeng;
        arEnd = 0;
        rotateBy = -rotateBy;
    }

    int i, arrTmp[rotateBy];

    for (i = 0; i < rotateBy; i++)
    {
        arrTmp[i] = arrArg[arStart - 1 - i];
        cout << endl
             << "arEnd - 1 - i : " << arStart - 1 - i;
    }

    for (i = 0; i < arrLeng; i++)
    {
        // arrArg[i] = arrArg[rotateBy + i];
        arrArg[i] = arrArg[rotateBy + i];
    }

    for (i = arEnd - rotateBy; i < arEnd; i++)
    {
        arrArg[i] = arrTmp[i - (arEnd - rotateBy)];
        // cout << endl
        //      << "i, arLeng, rotateBy, i - (arrLeng - rotateBy): "
        //      << i << ", " << arrLeng << ", " << rotateBy << ", " << i - (arrLeng - rotateBy) << endl;
    }

    printArray(arrArg, arrLeng);
    printArray(arrTmp, rotateBy);
}
*/