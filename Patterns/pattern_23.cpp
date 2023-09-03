#include <iostream>
using namespace std;
/*
  Q23
    Solid HAlf Diamond
    *
    * *
    * * *
    * * * *
    * * *
    * *
    *

  */

int main()
{
  int n;
  cout << "Enter n: ";
  cin >> n;
  for (int i = 0; i < n; i++)
  { // upper -half
    if (i < n / 2)
    {
      for (int j = 0; j < i + 1; j++)
      {
        cout << "* ";
      }
    }
    else
    { // bottom-half
      for (int j = 0; j < n - i; j++)
      {
        cout << "* ";
      }
    }

    cout << endl;
  }
  return 0;
}