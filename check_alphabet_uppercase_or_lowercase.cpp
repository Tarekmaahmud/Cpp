#include <iostream>
using namespace std;

int main()
{

    char alphabet;

    cout << "Enter a Alphabet: ";
    cin >> alphabet;

    if (alphabet >= 'a' && alphabet <= 'z')
    {
        cout << "Lowercase \n";
    }
    else if (alphabet >= 'A' && alphabet <= 'Z')
    {
        cout << "Upper Case\n";
    }
    else
    {
        cout << "Not a alphabet\n";
    }

    return 0;
}