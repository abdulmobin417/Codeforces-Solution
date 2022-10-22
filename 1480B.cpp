#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, A, B;
    cin >> t;
    while(t--){
        long long A, B, n, divA = 0, remA = 0, divM = 0, remM = 0;
        cin >> A >> B >> n;
        vector<pair<long long,long long>> ab(n);
        for(int i=0; i<n; i++) cin >> ab[i].first;
        for(int i=0; i<n; i++) cin >> ab[i].second;
        sort(ab.begin(),ab.end());
        for(int i=0; i<n; i++){
            if(B <= 0) break;
            divA = ab[i].second / A;
            remA = ab[i].second % A;
            divM = B / ab[i].first;
            remM = B % ab[i].first;
            if(remA) divA++;
            if(remM) divM++;
            divA = min(divA, divM);
            B -= divA * ab[i].first;
            ab[i].second -= divA * A;
        }
        if(ab[n-1].second > 0) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}


