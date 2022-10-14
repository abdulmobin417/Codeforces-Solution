#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, num = 0;
    cin >> n >> m;
    for(int i=0; i<n+m; i++){
        for(int j=0; j<n+m; j++){
            if(i*i+j == n && i+j*j ==m) num++;
        }
    }
    cout << num;
}


