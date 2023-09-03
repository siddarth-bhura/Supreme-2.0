#include <iostream>
using namespace std;
/*
 Q13
     Hollow Diamond Pattern
                      *
                    *   *
                  *       *
                *           *
              *               *
              *               *
                *           *
                  *       *
                    *   *
                      *
 */
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i < n / 2)
        {
            // space
            for (int j = 0; j < n - i - 1; j++)
            {
                cout << " ";
            }
            // stars
            for (int j = 0; j < 2 * i + 1; j++)
            {
                if (j == 0 || j == 2 * i)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        else
        {
            // space
            for (int j = 0; j < i; j++)
            {
                cout << " ";
            }
            // stars
            for (int j = 0; j < n - i; j++)
            {
                if (j == 0 || j == n - i - 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}