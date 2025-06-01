#include <iostream>
using namespace std;
void printx(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{

    int arr[] = {2, 5, 9, 7, 1, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int temp, swapp = 0;
    cout << size << endl;

    for (int i = 0; i < size; i++)
    {
        swapp = 0;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapp = 1;
            }
        }
        if (swapp == 0)
            break;
    }

    printx(arr, size);
    return 0;
}
