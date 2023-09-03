#include <iostream>
using namespace std;
/*
 Q10
      Inverted Full Pyramid Pattern
                   *
                 *   *
               *   *   *
             *   *   *   *
           *   *   *   *   *
           *   *   *   *   *
             *   *   *   *
               *   *   *
                 *   *
                   *
   For Odd numbers the pyramid will not print same double rows instead one row will be skipped. Try this out
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
            // upward diamond space
            for (int j = 0; j < n - i - 1; j++)
            {
                cout << " ";
            }
            // upward diamond stars
            for (int j = 0; j < i + 1; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            // inverted diamond space
            for (int j = 0; j < i; j++)
            {
                cout << " ";
            }
            // inverted diamond stars
            for (int j = 0; j < n - i; j++)
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}