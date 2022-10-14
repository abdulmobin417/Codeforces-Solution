#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n, k, num = -999999999;
    cin >> n >> k;
    for(int i=0; i<n; i++){
        long long int Fi, Ti;
        cin >> Fi >> Ti;
        if(Ti >= k){
            if(Fi - (Ti - k) >= num) num = Fi - (Ti - k);
        }else{
            if(Fi >= num) num = Fi;
        }
    }
    cout << num;
}
