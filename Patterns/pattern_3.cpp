 #include <iostream>
using namespace std;
   /*
  Q3
       Hollow Rectangle Pattern
        * * * * * *
        *         *
        * * * * * *
  */
int main() {
      int n;
      int c;
      cout << "Enter n: ";
      cin >> n;
      cout << "Enter c: ";
      cin >> c;
      for(int i = 1; i <= n; i++){
        for(int j=1;j <= c;j++) {
          if(i == 1 || i == n){
              cout << "* ";
          }else{
            if(j == 1 || j==c){
              cout << "* ";
            }else {
              cout << "  ";
            }
          }
        }
        cout << endl;
      }
  
return 0;
}