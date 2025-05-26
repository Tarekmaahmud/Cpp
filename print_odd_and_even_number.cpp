#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "Enter a positive Number: ";
    cin >> num;

    int i = 0;
    while (i <= num)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
        i++;
    }

    return 0;
}