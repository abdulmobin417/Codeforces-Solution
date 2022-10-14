#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, x, b, y;
    cin >> n >> a >> x >> b >> y;
    int temp = 0;
    for(int i=0; i<n; i++){
        if(a!=n){
            a++;
        }else{
            a=1;
        }
        if(b!=1){
            b--;
        }else{
            b=n;
        }
        if(a==b){temp = 1;break;}
        if(a==x || b==y){break;}
    }
    if(temp == 1){cout << "YES";}
    else{cout << "NO";}
}

