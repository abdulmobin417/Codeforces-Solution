#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, a = 0, b = 0;
    cin >> t;
    string n;
    cin >> n;
    for(int i=0; i<t; i++){
        if(n[i] == '1') a++;
        else if(n[i] == '0') b++;
    }
    if(a > b) cout << a - b;
    else cout << b - a;
}

