#include <iostream>
using namespace std;

int main()
{
    int arr1[10];
    int arr2[4] = {10, 20, 30, 40};
    int arr3[] = {3, 5, 7, 9, 11, 13, 15, 17, 19, 21};

    arr1[3 / 2] = 2;   // 3/2 = 1.5 -> arr1[1] = 2
    arr1[2] = arr2[2]; // arr1[2] = 30 -> arr1[2]

    cout << "arr2[-2] = " << arr2[-2] << endl;

    return 0;
}