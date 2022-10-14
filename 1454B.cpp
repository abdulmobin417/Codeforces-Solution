#include<bits/stdc++.h>
using namespace std;

int match(int arr[], int n){
    sort( arr, arr + n );
    bool match = false;
    for ( int i = 0; i < n; ++i ) {
        if ( i == n - 1 || arr[i] != arr[i + 1] ) {
            if ( match )
                match = false;
            else
                return arr[i];
        } else {
            match = true;
        }
    }

    return -1;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], a2[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
            a2[i] = a[i];
        }
        int res = match(a, n);
        if(res == -1) cout << -1 << endl;
        else{
            for(int i=0; i<n; i++){
                if(res == a2[i]){
                    cout << i+1 << endl;
                    break;
                }
            }
        }
        //cout << res << endl;
    }
}







