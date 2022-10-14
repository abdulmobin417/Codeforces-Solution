#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<char> vc;
        while(n){
            int a = 0;
            if(s[n-1] == '0'){
                a = 96 + (s[n-2] - '0') + (s[n-3] - '0')*10;
                vc.push_back(a);
                n = n - 3;
            }else{
                a = 96 + (s[n-1] - '0');
                vc.push_back(a);
                n--;
            }
        }
        for(int i=vc.size()-1; i>=0; i--){
            cout << vc[i];
        }cout << endl;
    }
}

