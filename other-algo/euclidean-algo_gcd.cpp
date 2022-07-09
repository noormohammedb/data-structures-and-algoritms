/*
  ---=> Euclidean Algorithm
  for development (auto compile and run)
  `ls *.cpp | entr -r -s "g++ euclidean-algo_gcd.cpp && ./a.out; rm a.out"`
*/
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, rem, nrator, drator, gcd, lcm;

    // num1 = 3768, num2 = 1701;
    num1 = 3, num2 = 4;

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

    gcd = drator;
    lcm = (num1 * num2) / gcd;

    cout << endl
         << "gcd of " << num1 << " and " << num2 << " is " << gcd;

    cout << endl
         << "lcm of " << num1 << " and " << num2 << " is " << lcm << endl;

    return 0;
}