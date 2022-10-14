#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int num = 1;
    vector<char> vc;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            i += 2;
            if(!num){
                cout<<" ";
            }
        }
        else{
            num = 0;
            cout << s[i];
        }
    }

}


