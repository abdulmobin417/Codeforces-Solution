#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, num = 0;
        cin >> n;
        if(n > 2) num = (n-1)/2;
        cout << num << endl;
    }
}

