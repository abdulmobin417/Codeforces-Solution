#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        long long int t1 = 0, t2 = 0, num = 0;
        cin >> s;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '('){
                t1++;
            }else if(s[i] == '['){
                t2++;
            }else if(s[i] == ')' && t1 != 0){
                t1--;
                num++;
            }else if(s[i] == ']' && t2 != 0){
                t2--;
                num++;
            }
        }
        cout << num << endl;
    }
}
