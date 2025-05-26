#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "Enter a positive Number: ";
    cin >> num;
    int flag = 1;
    for (int i = 2; i < num; i++)
    {
        flag = 1;

        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            cout << i << " ";
        }
    }

    return 0;
}