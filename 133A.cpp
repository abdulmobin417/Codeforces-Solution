#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int num = 0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
            num = 1;
            break;
        }
    }
    if(num) cout << "YES";
    else cout << "NO";
}
