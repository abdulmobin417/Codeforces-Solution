#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t, n, w, h, ans = 1;
    cin>>t;
    for(int i=0; i<t; i++){
        cin >> w >> h >> n;
        if(n == 1){
            cout << "YES" << endl;
            continue;
        }
        while(w % 2 == 0){
            ans *= 2;
            w = w / 2;
        }
        while(h % 2 == 0){
            ans *= 2;
            h = h / 2;
        }
        if( n <= ans){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        ans = 1;

    }
   return 0;
}
