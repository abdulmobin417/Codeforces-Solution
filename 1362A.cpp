#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--){
        long long int a, b, n, total = 0;
        cin >> a >> b;
        if(a>b) swap(a,b);
        if(a == b) cout << 0 << endl;
        else if(b%a !=0) cout << -1 << endl;
        else{
            n = b/a;
            while(n%8 == 0){
                n = n/8;
                total++;
            }
            while(n%4 == 0){
                n = n/4;
                total++;
            }
            while(n%2 == 0){
                n = n/2;
                total++;
            }
            if(n != 1) cout << -1 << endl;
            else cout << total << endl;
        }
    }
}

