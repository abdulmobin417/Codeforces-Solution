#include<bits/stdc++.h>
using namespace std;

int smallest_digit(int n) {
   int min = n % 10;
   n /= 10;
   while (n != 0) {
      if (min > n % 10)
         min = n % 10;
      n /= 10;
   }
   return min;
}
int main() {
   int t;
   cin >> t;
   while(t--){
        int n;
        cin >> n;
        if(n < 100) cout << n%10 << endl;
        else cout << smallest_digit(n) << endl;
   }
}
