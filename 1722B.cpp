#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, check = 1;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        for(int i=0; i<s1.length(); i++){
            if((s1[i] == 'R' && s2[i] != 'R') || (s1[i] != 'R' && s2[i] == 'R')){
                check = 0;
                break;
            }
        }
        if(check) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
