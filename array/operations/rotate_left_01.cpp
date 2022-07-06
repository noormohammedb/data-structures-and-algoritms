/*
  for development (auto compile and run)
  `ls *.cpp | entr -r -s "g++ rotate_left_01.cpp && ./a.out; rm a.out"`
*/
#include <iostream>
using namespace std;
void printArray(int arrArg[], int arrLeng);
void rotateArray(int arrArg[], int arrLeng, int rotateBy);

int main()
{
    int arr[] = {2, 5, 8, 1, 4};
    int arrleng, rotateBy = 3, temp, j = 0;
    arrleng = sizeof(arr) / sizeof(arr[0]);

    cout
        << "\n\narray length: " << arrleng
        << ", rotate by: " << rotateBy;

    cout << endl
         << "array beofre" << endl;
    printArray(arr, arrleng);

    rotateArray(arr, arrleng, rotateBy);

    cout << endl
         << "array beofre" << endl;
    printArray(arr, arrleng);

    return 0;
}

void printArray(int arrArg[], int arrLeng)
{
    for (int i = 0; i < arrLeng; i++)
    {
        cout << arrArg[i] << ", ";
    }
    cout << endl;
}

void rotateArray(int arrArg[], int arrLeng, int rotateBy)
{
    int temp, j;
    for (int i = 0; i < rotateBy; i++)
    {
        for (j = 0, temp = arrArg[0]; j < arrLeng - 1; j++)
        {
            arrArg[j] = arrArg[j + 1];
        }
        // cout << endl
        //      << "i, j, temp : " << i << ", " << j << ", " << temp << endl;
        // printArray(arrArg, arrLeng);

        arrArg[j] = temp;
    }
}