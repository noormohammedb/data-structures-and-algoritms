/*
  for development (auto compile and run)
  `ls *.cpp | entr -r -s "g++ array_02.cpp && ./a.out; rm a.out"`
*/
#include <iostream>
using namespace std;

int main()
{
    int arr[5], i;

    cout << endl
         << "Size of integer in this compiler is "
         << sizeof(int) << " bytes" << endl;

    for (i = 0; i < 5; i++)
    {
        cout << "Address arr[" << i << "] is "
             << &arr[i] << " value : " << arr[i] << endl;
    }

    return 0;
}