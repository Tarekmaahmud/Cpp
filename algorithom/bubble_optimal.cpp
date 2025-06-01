#include <iostream>
#include <algorithm>
using namespace std;

void swapping(int arr[], int size);

void printing(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{

    int arr[] = {2, 5, 9, 7, 1, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array List: ";
    printing(arr, size);

    swapping(arr, size);
    cout << "Sort List: ";
    printing(arr, size);

    return 0;
}

void swapping(int arr[], int size)
{
    int swapp = 0;

    for (int i = 0; i < size; i++)
    {
        swapp = 0;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapp = 1;
            }
        }
        if (!swapp)
            break;
    }
}