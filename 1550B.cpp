#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n, a, b;
    string s;
    cin >> t;
    while(t--){
        cin >> n >> a >> b;
        cin >> s;
        if(b >= 0) cout << a * n + n * b << endl;
        else{
            int num = 1;
            for(int i=1; i<n; i++){
                if(s[i-1] != s[i]) num++;
            }
            cout << a * n + ((num / 2) + 1) * b << endl;
        }
    }
}
