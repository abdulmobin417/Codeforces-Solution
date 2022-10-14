#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n, k, num = 0;
    cin >> n >> k;
    long long int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0;; i++){
        if(i*(i+1)/2 == k){
            num = i;
            break;
        }else if((i*(i+1)/2) > k){
            num = k - (i*(i-1)/2);
            break;
        }
    }
    cout << a[num-1];
}

