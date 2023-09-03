#include <iostream>
using namespace std;
/*
  Q16
       Fancy Pattern
        1
        2 * 2
        3 * 3 * 3
        4 * 4 * 4 * 4
        3 * 3 * 3
        2 * 2
        1
  */
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    // upper-half
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            if (j == i)
            {
                cout << i + 1;
            }
            else
            {
                cout << i + 1 << "*";
            }
        }
        cout << endl;
    }
    // bottom-half
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (j == n - i - 2)
            {
                cout << n - i - 1;
            }
            else
            {
                cout << n - i - 1 << "*";
            }
        }
        cout << endl;
    }
    return 0;
}