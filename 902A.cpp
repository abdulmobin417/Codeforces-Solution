#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, temp = 0, goal = -1;
    cin >> n >> m;
    int a[n][2];
    for(int i=0; i<n; i++){
        cin >> a[i][0] >> a[i][1];
        if(a[i][1] == m) goal = i;
    }
    int sub = a[goal][0];
    for(int i=goal; i>=0; i--){
        if(a[i][0] <= sub && sub <= a[i][1]) sub = a[i][0];
    }
    if(sub == 0) cout << "YES";
    else cout << "NO";
}
