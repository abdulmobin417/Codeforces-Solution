#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        if(n%7 == 0) cout << n << endl;
        else{
            long long int x = n % 7;
            long long int y = n % 10;
            if(y + 7 - x <= 9) cout << n - x + 7 << endl;
            else cout << n - x << endl;
        }
    }
}

