#include <iostream>
using namespace std;
/*
  Q5
       Inverted Half Pyramid Pattern
        * * * * *
        * * * *
        * * *
        * *
        *
  */
 int main() {
      int n;
      cout << "Enter n: ";
      cin >> n;
      for(int i = 0; i < n; i++){
        for(int j=0;j < n-i;j++) {
           cout << "* ";
        }
        cout << endl;
      }
 return 0;
 }