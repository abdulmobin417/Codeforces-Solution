#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long int n, m, sum = 0;
        cin >> n;
        long long int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        cin >> m;
        long long int b[m];
        for(int i=0; i<m; i++){
            cin >> b[i];
            sum += b[i];
        }
        cout << a[sum % n] << endl;
    }
}

