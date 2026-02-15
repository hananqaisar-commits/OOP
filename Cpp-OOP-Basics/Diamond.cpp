#include <iostream>
using namespace std;

int main()
{

    int number;

    cout << "How many number of rows? ";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        for (int k = number; k > i; k--)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "*";
        }

        cout << "\n";
    }

    for (int i = number; i >= 1; i--)
    {
        for (int k = number - 1; k > i; k--)
        {
            cout << " ";
        }
        for (int j = 2 * i - 1; j < 0; j--)
        {
            cout << "*";
        }

        cout << "\n";
    }

    return 0;
}