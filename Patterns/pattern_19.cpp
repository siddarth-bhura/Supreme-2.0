#include <iostream>
using namespace std;
/*
  Q19
    A
    A B A
    A B C B A
    A B C D C B A
    A B C D E D C B A

  */
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char ch;
        for (int j = 0; j < i + 1; j++)
        {
            int number = j + 1;
            ch = number + 'A' - 1;
            cout << ch;
        }
        // jab tak A tak nhi pahuchte tab tak print krenge
        for (char alphabet = ch; alphabet > 'A';)
        {
            alphabet = alphabet - 1;
            cout << alphabet;
        }
        cout << endl;
    }
    return 0;
}