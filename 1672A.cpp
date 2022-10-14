#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n], sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum = sum + a[i] - 1;
        }
        if(sum%2!=0){
            cout << "errorgorn" << endl;
        }else{
            cout << "maomao90" << endl;
        }
    }
}
