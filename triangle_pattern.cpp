#include <iostream>
using namespace std;
int main()
{
    /*

    *
    * *
    * * *
    * * * *

    */

    int n = 4;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j >= 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;

    /*

            *
          *   *
        *   *   *
      *   *   *  *

    */
    for (int i = 0; i < n; i++)
    {
        for (int j = n / 2; j < n-i; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}