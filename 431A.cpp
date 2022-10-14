#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vc;
    string s;
    int sum = 0;
    for(int i=0; i<4; i++){
        int a;
        cin >> a;
        vc.push_back(a);
    }
    cin >> s;
    for(int i=0; i<s.length(); i++){
        sum += vc[(s[i] - '0')-1];
    }
    cout << sum;
}


