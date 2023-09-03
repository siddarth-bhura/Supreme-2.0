#include <iostream>
using namespace std;
/*
  Q25
    Butterfly PAttern

        *             *
        * *         * *
        * * *     * * *
        * * * * * * * *
        * * * * * * * *
        * * *     * * *
        * *         * *
        *             *

  */

int main()
{
  int n;
  cout << "Enter n: ";
  cin >> n;
  n = n / 2;
  for (int i = 0; i < n; i++)
  {
    // top-left half pyramid pattern
    for (int j = 0; j < i + 1; j++)
    {
      cout << "*";
    }
    // upper inverted pyramid pattern
    for (int j = 0; j < n - i; j++)
    {
      cout << "  ";
    }
    // top-right half pyramid pattern
    for (int j = 0; j < i + 1; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
  for (int i = 0; i < n; i++)
  {
    // bottom-left half pyramid pattern
    for (int j = 0; j < n - i; j++)
    {
      cout << "*";
    }
    // bottom pyramid Pattern
    for (int j = 0; j < i + 1; j++)
    {
      cout << "  ";
    }
    // bottom-right half pyramid pattern
    for (int j = 0; j < n - i; j++)
    {
      cout << "*";
    }
    cout << endl;
  }
  return 0;
}