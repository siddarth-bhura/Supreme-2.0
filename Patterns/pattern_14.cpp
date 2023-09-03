#include <iostream>
using namespace std;
/*
 Q14
    Flipped Solid Diamond Pattern
      * * * *     * * * *
      * * *         * * *
      * *             * *
      *                 *
      *                 *
      * *             * *
      * * *         * * *
      * * * *     * * * *
 */

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        // top-left Inverted Half Pyramid Pattern
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        // Diamond Space Pattern
        for (int j = 0; j < i + 1; j++)
        {
            cout << "  ";
        }
        // top-right Inverted Half Pyramid Pattern
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        // bottom-left Half Pyramid Pattern
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        // bottom diamond space pattern
        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }
        // bottom-right half pyramid pattern
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}