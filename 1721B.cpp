#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, sx, sy, d;
        cin >> n >> m >> sx >> sy >> d;
        int laser = n - sx + m - sy;
        int goal = n + m - 2;
        if(laser <= d) cout << -1 << endl;
        else{
            if((sx - d > 1 && sy + d < m) || (sy - d > 1 && sx + d < n)){
                cout << goal << endl;
            }
            else cout << -1 << endl;
        }
    }
}
