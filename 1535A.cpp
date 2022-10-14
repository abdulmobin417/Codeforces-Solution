#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(a > b){
            if(c > d){
                if(c > b && a > d) cout << "YES" << endl;
                else cout << "NO" << endl;
            }else{
                if(d > b && a > c) cout << "YES" << endl;
                else cout << "NO" << endl;
            }
        }else{
            if(c > d){
                if(c > a && b > d) cout << "YES" << endl;
                else cout << "NO" << endl;
            }else{
                if(d > a && b > c) cout << "YES" << endl;
                else cout << "NO" << endl;
            }
        }
    }
}


