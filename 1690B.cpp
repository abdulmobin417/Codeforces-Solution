#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, res = 0, ans = 0;
        cin >> n;
        int a[n], b[n];
        for(int j=0; j<n; j++){cin >> a[j];}

        for(int j=0; j<n; j++){cin >> b[j];}

        for(int i=0; i<n; i++){res = max(res, a[i]-b[i]);}

        for(int i=0; i<n; i++){a[i] = max(0, a[i]-res);}

        for(int i=0; i<n; i++){
            if(a[i] != b[i]){
                ans = 1;
                break;
            }
        }
        if(ans) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}


