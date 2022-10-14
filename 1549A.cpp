#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, x = 2;
    cin >> t;
    while(t--){
        int p;
        cin >> p;
        int y = (p-1)/2;
        if(x >= y) cout << x << " " << y*x << endl;
        else cout << x <<" " << y << endl;
    }
}


