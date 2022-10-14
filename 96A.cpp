#include<bits/stdc++.h>
using namespace std;

int main()
{
    int res = 1;
    string s1, t1 = "0000000", t2 = "1111111";
    cin >> s1;

    for(int i=0; i<s1.length(); i++){
        string r = s1.substr(i, 7);
        if(r == t1 || r == t2){
            res = 0;
            break;
        }

    }
    if(res) cout << "NO";
    else cout << "YES";
}

