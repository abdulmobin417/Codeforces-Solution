#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, num = 0;
        cin >> n;
        string str;
        cin >> str;
        if(n == 2) cout << n << endl;
        else if(n%2 == 0){
            for(int i=n/2; i<n; i++){
                if(str[i] != str[i+1]) break;
                else num++;
            }
            cout << num*2+2 << endl;
        }else{
            for(int i=n/2; i<n; i++){
                if(str[i] != str[i+1]) break;
                else num++;
            }
            cout << num*2+1 << endl;
        }
    }
}


