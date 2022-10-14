#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, num = 0;
    cin >> n >> k;
    string s;
    cin >> s;
    for(int i=0; i<n; i++){
        if(s[i] == '.') num = 0;
        else num++;
        if(num == k) break;
    }
    if(num >= k) cout << "NO";
    else cout << "YES";
}
