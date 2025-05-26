#include <iostream>
using namespace std;
int main()
{

    int marks;

    cout << "Enter Your Marks: ";
    cin >> marks;

    if (marks >= 80 && marks <=100)
        cout << "A+\n";
    else if (marks >= 70 && marks < 80)
        cout << "A\n";
    else if (marks >= 60 && marks < 70)
        cout << "A-\n";
    else if (marks >= 50 && marks < 60)
        cout << "B\n";
    else
        cout << "Fail\n";

    return 0;
}