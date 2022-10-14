#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    while(t--){
        int a = 1;
        cin >> n;
        string s;
        cin >> s;
        if(n%2 != 0){
            for(int i=0; i<n; i += 2){
                if((s[i]-'0')%2 == 1){
                    a = 1;
                    break;
                }else a = 0;
            }
        }else{
            for(int i=1; i<n; i += 2){
                if((s[i]-'0') % 2 == 0){
                    a = 0;
                    break;
                }else a = 1;
            }
        }
        if(a) cout << 1 << endl;
        else cout << 2 << endl;
    }
}

