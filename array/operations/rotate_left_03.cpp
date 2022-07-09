/*
  ---=> JUGGLING ALGORITHM
  for development (auto compile and run)
  `ls *.cpp | entr -r -s "g++ rotate_left_03.cpp && ./a.out; rm a.out"`
*/
#include <iostream>
using namespace std;
void rotateArray(int arrArg[], int arrLeng, int rotateBy);
// void rotateLeft(int arrArg[], int arrLeng, int rotateBy);
// void rotateRight(int arrArg[], int arrLeng, int rotateBy);
void printArray(int arrArg[], int arrLeng);
int getGcd(int num1, int num2);

int main()
{
    int arr[] = {2, 5, 8, 1, 4, 3};
    int arrleng, rotateBy = 1;
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
    int temp, i, j;
    int gcd = getGcd(arrLeng, rotateBy);
    cout << endl
         << "gcd of " << arrLeng << " and " << rotateBy << " is " << gcd;

    for (i = 0; i < gcd - 1; i++)
    {
        temp = arrArg[i];
        for (j = 0; j < rotateBy - 1; j++)
        {
            arrArg[(j * gcd) + i] = arrArg[(gcd * (j + 1) + i)];
            cout << endl
                 << "arrArg[" << (j * gcd) + i << "] = arrArg[" << (gcd * (j + 1) + i) << "]";
        }
        arrArg[(j * gcd) + i] = temp;

        cout << endl;
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

int getGcd(int num1, int num2)
{
    int rem, nrator, drator;

    // num1 = 3768, num2 = 1701;
    // num1 = 3, num2 = 4;

    if (num1 > num2)
    {
        nrator = num1;
        drator = num2;
    }
    else
    {
        nrator = num2;
        drator = num1;
    }

    for (rem = nrator % drator; rem > 0; rem = nrator % drator)
    {
        nrator = drator;
        drator = rem;
    }

    cout << endl
         << "gcd of " << num1 << " and " << num2 << " is " << drator << endl;
    return drator;
}