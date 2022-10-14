#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, i = 0, rem = 0;
        vector<int> vc;
        cin >> n;
        string s = to_string(n);
        int len = s.length();
        for(int k=0; k<len; k++){
            if(s[k] != '0'){
                vc.push_back((s[k] - '0') * round(pow(10, len - 1 - k)));
            }

        }
        cout << vc.size() << endl;
        for(int k=vc.size()-1; k>=0; k--){
            cout << vc[k] << " ";
        }
        cout << endl;
    }
}

/*
Tried first this type

while(n != 0){
    if(n%10 == 0 || n < 10){
        vc.push_back(n * round(pow(10, i)));
        i++;
        break;
    }
    else{
        rem = n%10;
        n = n/10;
        vc.push_back(rem * round(pow(10, i)));
        i++;
    }
}
cout << i << endl;
for(int j=0; j<i; j++){
    cout << vc[j] << " ";
}cout << endl;
*/


