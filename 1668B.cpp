#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;
        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];
        if(n > m) cout << "NO" << endl;
        else{
            sort(a, a+n, greater<int>());
            int chair = m - a[0];
            int flag = 1;
            for(int i=0; i<n; i++){
                if(chair <= 0){
                    flag = 0;
                    break;
                }else{
                    chair -= (a[i] + 1);
                }
            }
            if(flag) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
}
