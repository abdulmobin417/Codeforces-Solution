#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--){
        int n;
        cin>>n;
        if(n==4)
            cout << 2 << " " << 1 << " " << 3 << " " << 4 << endl;
        else
        {
        for(int i=4;i<=n-2;i++)
        {
            cout << i <<" ";
        }
        cout << 2 << " " << 3 << " " << 1 << " " << n-1 << " " << n << endl;
        }
    }
}

