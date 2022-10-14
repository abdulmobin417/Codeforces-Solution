#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, res = 0;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        for(int i=1; i<n; i++){
            if(arr[i] != arr[i-1]){
                if(arr[i] == arr[i+1]) res = i;
                else res = i + 1;
                break;
            }
        }
        cout << res << endl;
    }
}

