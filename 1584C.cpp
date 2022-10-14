#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n], b[n], num = 0;
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];
        sort(a, a+n);
        sort(b, b+n);
        for(int i=0; i<n; i++){
            if(a[i] != b[i]){
                if(a[i] < b[i]){
                    if(a[i]+1 == b[i]) num++;
                }
            }else if(a[i] == b[i]) num++;
        }
        if(num == n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
