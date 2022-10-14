#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, a[1000], b[1000];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }
    int pass = 0, temp = 0;
    for(int i = 0; i < n; i++){
        pass = pass - a[i] + b[i];
        if(temp < pass){
            temp = pass;
        }
    }
    cout << temp << endl;
}

