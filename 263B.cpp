#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i=0; i<n; i++) cin >> a[i];
    if(k > n) cout << -1;
    else{
        sort(a, a+n, greater<int>());
        cout << a[k-1] << " " << 0;
    }
}

