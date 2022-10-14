#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, rem = 0, ans = 0;
    cin >> n >> m;
    while(n--){
        int a;
        cin >> a;
        ans = (a + rem) / m;
        rem = (a + rem) % m;
        cout << ans << " ";
    }
}


