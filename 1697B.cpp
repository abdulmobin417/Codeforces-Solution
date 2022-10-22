#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n, q, x, y;
    cin >> n >> q;
    long long int a[n], sum[n] = {0};
    for(long long int i=0; i<n; i++) cin >> a[i];
    sort(a, a+n);
    for(long long int i=1; i<=n; i++){
        sum[i] = sum[i-1] + a[i-1];
    }
    for(int i=0; i<q; i++){
        cin >> x >> y;
        cout << sum[n-x+y] - sum[n-x] << endl;
    }
}

