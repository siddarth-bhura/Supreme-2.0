#include <iostream>
using namespace std;
/*
  Q15
       Fancy Pattern
        1
        2 * 2
        3 * 3 * 3
        4 * 4 * 4 * 4
  */
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    // Solution - 1
    //  for (int i = 0; i < n; i++){
    //      for(int j=0;j<2*i + 1;j++){
    //          if(j %2 == 1){
    //              cout << "*";
    //          }else{
    //              cout << i+1;
    //          }
    //      }
    //      cout << endl;
    //  }

    // Solution - 2
    for (int i = 0; i < n; i++)
    {
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
        cout << endl;
    }
    return 0;
}