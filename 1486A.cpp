#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll arr[n+1];
        int res = 0;
        ll sum = 0;

        for (int i = 1; i < n+1; i++){
            cin >> arr[i];
        }

        for (int i = 1; i < n+1; i++){
            sum = sum + arr[i];
            ll need = (i * (i - 1)) / 2;
            if (sum < need){
                res = 1;
                break;
            }
        }
        if (res){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
}

