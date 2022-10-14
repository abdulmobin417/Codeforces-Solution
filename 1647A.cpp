#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, s;
    cin >> t;
    while(t--){
        cin >> s;
        int two = (s + 1) / 3;
        int one = s - (two * 2);
        if(one > two){
            for(int i=1; i<=one+two; i++){
                if(i%2 == 1) cout << 1;
                else cout << 2;
            }
        }else{
            for(int i=1; i<=one+two; i++){
                if(i%2 == 0) cout << 1;
                else cout << 2;
            }
        }
        cout << endl;
    }
}
