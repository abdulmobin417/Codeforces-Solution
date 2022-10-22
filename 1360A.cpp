#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, a, b;
    cin >> t;
    while(t--){
        int ans = 0;
        cin >> a >> b;
        if(a < b) swap(a, b);
        if(b + b > a) ans = (b + b) * (b + b);
        else ans = a * a;
        cout << ans << endl;
    }
}

