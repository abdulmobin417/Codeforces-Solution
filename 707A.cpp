#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, res = 0;

    cin >> n >> m;

    char arr[n][m];

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 'C' || arr[i][j] == 'M' || arr[i][j] == 'Y') res = 1;
        }
    }
    if(res) cout << "#Color";
    else cout << "#Black&White";
}

