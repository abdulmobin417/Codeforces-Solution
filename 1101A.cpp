#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while(q--){
        long long int l, r, d, i = 1;
        cin >> l >> r >> d;
        if(d < l) cout << d << endl;
        else {
            int rem = r%d;
            cout << r + d - rem << endl;
        }
    }
}


