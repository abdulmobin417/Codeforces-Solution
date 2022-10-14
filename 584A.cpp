#include<bits/stdc++.h>
using namespace std;

string n_DigitDivBy_T(int n, int t) {
   string ans = "";
   if (t < 10) {
      ans += to_string(t);
      for (int i = 1; i < n; i++)
      ans += "0";
   }
   else {
      if (n == 1)
         return "-1";
      else {
         string temp = to_string(t);
         ans += to_string(t);
         for (int i = 0; i < n-temp.length(); i++)
         ans += "0";
      }
   }
   return ans;
}
int main() {
   int n, t;
   cin >> n >> t;
   cout << n_DigitDivBy_T(n, t);
}


