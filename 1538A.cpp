#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, idx1 = 0, idx2 = 0, mn, mx, range;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(i == 0){
                mn = a[0];
                mx = a[0];
            }
            if(mn > a[i]){
                mn = a[i];
                idx1 = i;
            }
            if(mx < a[i]){
                mx = a[i];
                idx2 = i;
            }
        }
        if(idx1 > idx2){
            swap(idx1, idx2);
        }
        range = idx2 - idx1;
        idx2 = n - idx2;
        idx1 = idx1 +1;
        if(idx2 < idx1){
            if(range < idx1){
                cout << idx2 + range << endl;
            }else{
                cout<<idx2+idx1<<endl;
            }
        }else{
            if(range < idx2){
                cout << idx1 + range << endl;
            }else{
                cout << idx2 + idx1 << endl;
            }
        }
    }
return 0;
}
