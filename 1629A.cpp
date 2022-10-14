#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, k;
    cin >> t;
    while(t--){
        cin >> n >> k;
        int a[n], b[n];
        vector<pair<int, int>> vc;
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
            vc.push_back(make_pair(a[i], b[i]));
        }
        sort(vc.begin(), vc.end());
        for(int i=0; i<n; i++){
            if(vc[i].first > k) break;
            else{
                k += vc[i].second;
            }
        }
        cout << k << endl;
    }
}
