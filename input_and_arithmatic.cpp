#include <iostream>
using namespace std;
int main()
{
    int a = 10, b = 20;

    int sum, sub, multi;

    sum = a + b;
    sub = a - b;
    multi = a * b;
    double div = (double)a / b;

    cout << "sum = " << sum << endl;
    cout << "sub = " << sub << endl;
    cout << "multi = " << multi << endl;
    cout << "div = " << div << endl;
    int num;

    cout << "Enter a number: ";
    cin >> num;
    cout << "Number is: " << num << "\n\n\n";

    return 0;
}