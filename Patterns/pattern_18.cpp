#include <iostream>
using namespace std;
/*
  Q18
    1
    1 2
    1   3
    1     4
    1 2 3 4 5

  */
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << "1";
        }
        else if (i == n - 1)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
        }
        else
        {
            for (int j = 0; j < i + 2; j++)
            {
                if (j == 0)
                {
                    cout << "1";
                }
                else if (j == i + 1)
                {
                    cout << i + 1;
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