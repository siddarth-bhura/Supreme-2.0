#include <iostream>
using namespace std;
/*
 Q9
      Inverted Full Pyramid Pattern
           *   *   *   *   *
             *   *   *   *
               *   *   *
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
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}