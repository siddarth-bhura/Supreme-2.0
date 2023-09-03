#include <iostream>
using namespace std;
/*
  Q22
  Fancy Pattern

    * * * * * * * * 1 * * * * * * * *
    * * * * * * * 2 * 2 * * * * * * *
    * * * * * * 3 * 3 * 3 * * * * * *
    * * * * * 4 * 4 * 4 * 4 * * * * *
    * * * * 5 * 5 * 5 * 5 * 5 * * * *

  */

int main()
{
  int n;
  cout << "Enter n: ";
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    // left half
    for (int j = 0; j < 2 * n - i - 2; j++)
    {
      cout << "*";
    }
    // mid section
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
    // right half
    for (int j = 0; j < 2 * n - i - 2; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}