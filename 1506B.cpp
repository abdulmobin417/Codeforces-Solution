#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k, num = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        for(int i=0; i<n; i++){
            if(s[i] == '*'){
                s[i]='X';
                num++;
                break;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(s[i] == '*'){
                s[i] = 'X';
                num++;
                break;
            }
        }
        for(int i=0; i<n; i++){
            if(s[i] == 'X'){
                int flag = 0;
                for(int j=1; j<=k; j++){
                    if(i+j<n && s[i+j] == 'X'){
                        flag = 1;
                        break;
                    }
                    else if(i+j >= n){
                        flag = 1;
                        break;
                    }
                }
                if(flag == 0){
                    for(int j=i+k; j>i; j--){
                        if(j<n && s[j] == '*'){
                            s[j] = 'X';
                            num++;
                            break;
                        }
                    }
                }
            }
        }
        cout << num << endl;
    }
}
