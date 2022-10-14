#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, res=0;
        cin >> n;
        for(int i=0; i<10; i++){
            if(pow(10,i) < n && pow(10,i+1) > n ){
                res = n - pow(10,i);
                break;
            }
        }
        cout << res << endl;
    }
}

