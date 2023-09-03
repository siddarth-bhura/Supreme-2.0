#include <iostream>
using namespace std;
/*
  Q21
  Numeric Palindrome Equilateral Pyramid
                1
              1 2 1
            1 2 3 2 1
          1 2 3 4 3 2 1
        1 2 3 4 5 4 3 2 1
  */

int main()
{
  int n;
  cout << "Enter n: ";
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    // First-Half
    for (int j = 0; j < n - i; j++)
    {
      cout << " ";
    }
    for (int j = 0; j < i + 1; j++)
    {
      cout << j + 1;
    }
    // second-half
    for (int j = i; j >= 1; j = j - 1)
    {
      cout << j;
    }
    cout << endl;
  }
  return 0;
}