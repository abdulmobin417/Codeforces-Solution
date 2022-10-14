#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int L1 = a - 1;
        int L2 = 0;
        if(b < c) L2 = c - 1 + c - b;
        else L2 = b - 1;
        if(L1 < L2) cout << 1 << endl;
        else if(L1 > L2) cout << 2 << endl;
        else cout << 3 << endl;
    }
}
