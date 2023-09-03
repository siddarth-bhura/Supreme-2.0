#include <iostream>
using namespace std;
/*
  Q24
    Floyd's Triangle
    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15
    16 17 18 19 20 21

  */

int main()
{
  int n;
  cout << "Enter n: ";
  cin >> n;
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i + 1; j++)
    {
      cout << count + 1 << " ";
      count = count + 1;
    }
    cout << endl;
  }
  return 0;
}