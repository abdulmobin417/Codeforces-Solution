#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s, s1;
    cin >> s;
    vector<int> vc;
    for(int i=0; i<s.length(); i++){
        if(s[i] != '+'){
            vc.push_back(s[i] - '0');
        }
    }
    sort(vc.begin(), vc.end());
    for(int i=0; i<vc.size(); i++){
        if(vc.size()-1 == i)cout << vc[i];
        else cout << vc[i] << "+";
    }
}





