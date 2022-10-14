#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    cin >> s >> t;
    int res=0, n = s.size()-1;
    for(int i = 0; i <= n; i++)
    {
        if(s[i] != t[n-i])
        {
            res=1;
            break;
        }
    }
    if(res == 0) cout << "YES";
    else cout << "NO";
}
