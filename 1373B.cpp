#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    string s;
    cin >> t;
    while(t--){
        int zero = 0, one = 0;
        cin >> s;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '1') one++;
            else zero++;
        }
        if(zero == 0 || one == 0) cout << "NET" << endl;
        else{
            if(zero < one){
                if(zero % 2 == 1) cout << "DA" << endl;
                else cout << "NET" << endl;
            }else{
                if(one % 2 == 1) cout << "DA" << endl;
                else cout << "NET" << endl;
            }
        }
    }
}
