#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, b, num = 0;
        cin >> a >> b;
        int temp = b - a%b;
        if(a%b == 0) cout << 0 << endl;
        else cout << temp << endl;
    }
}

