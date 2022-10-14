#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, m, res = 0;
        cin >> n >> m;
        if((n*m)%2==0) res = (n*m)/2;
        else res = ((n*m)+1)/2;
        cout << res << endl;
    }
}

