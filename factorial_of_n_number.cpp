#include <iostream>
using namespace std;

int main()
{
    /*
     1 * 1 = 1
     1 * 2 = 2
     2 * 3 = 6
     6 * 4 = 24
     24 * 5 = 124
     */

    int num = 5;
    int factorial = 1;

    for (int i = 1; i <= num; i++)
    {
        factorial *= i;
    }
    cout << "Factorial: " << factorial << endl;

    return 0;
}