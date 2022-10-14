#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        x = x - a;
        y = y - b;
        if(x > 0 && y > 0 ){
            if(x+y <= c) cout << "YES" << endl;
            else cout << "NO" << endl;
        }else if(x > 0 && y < 1){
            if(x <= c) cout << "YES" << endl;
            else cout << "NO" << endl;
        }else if(y > 0 && x < 1){
            if(y <= c) cout << "YES" << endl;
            else cout << "NO" << endl;
        }else cout << "YES" << endl;
    }
}


