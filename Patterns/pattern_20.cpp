#include <iostream>
using namespace std;
/*
  Q20
  Numeric Hollow Inverted Half Pyramid
  1 2 3 4 5
  2     5
  3   5
  4 5
  5
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
         for (int j = 0; j < n; j++)
         {
            cout << j + 1;
         }
      }
      else if (i == n - 1)
      {
         cout << i + 1;
      }
      else
      {
         for (int j = 0; j < n - i; j++)
         {
            if (j == 0)
            {
               cout << i + 1;
            }
            else if (j == n - i - 1)
            {
               cout << n;
            }
            else
            {
               cout << " ";
            }
         }
      }
      cout << endl;
   }
   return 0;
}