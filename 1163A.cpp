#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if(m==0){
        cout<<1;
    }else if(n==m){
        cout<<0;
    }else{
        if(n/m>=2){
            cout << m;
        }else{
            cout << n-m;
        }
    }
}
