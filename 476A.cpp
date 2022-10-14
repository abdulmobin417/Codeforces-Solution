#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    if(m > n) cout << -1;
    else{
        int result = (n+1)/2;
        while(result%m != 0) result++;
        cout << result;
    }
}


