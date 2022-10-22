#include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n , k, num;
    cin >> t;
    while(t--){
        cin >> n >> k;
        vector<pair<int,int>> vc(n);
        for(int i=0; i<n; i++){
            cin >> vc[i].first >> vc[i].second;
        }
        for(int i=0; i<n; i++){
            num = 0;
            for(int j=0; j<n; j++){
                int a = abs(vc[i].first - vc[j].first) + abs(vc[i].second - vc[j].second);
                if(a <= k) num++;
            }
            if(num == n) break;
        }
        if(num == n) cout << 1 << endl;
        else cout << -1 << endl;
    }
}
