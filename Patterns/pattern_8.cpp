#include <iostream>
using namespace std;
/*
 Q8
      Full Pyramid Pattern
           *
         *   *
       *   *   *
     *   *   *   *
    *  *   *   *   *
 */
int main()
{
  int n;
  cout << "Enter n: ";
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    // space
    for (int j = 0; j < n - i - 1; j++)
    {
      cout << " ";
    }
    // stars
    for (int j = 0; j < i + 1; j++)
    {
      cout << "* ";
    }
    cout << endl;
  }
  return 0;
}