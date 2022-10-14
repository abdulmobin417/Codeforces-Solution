#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n, sum = 0;
    cin >> n;
    long long int a[n];
    for(int i=0; i<n; i++)cin >> a[i];
    sort(a, a+n);
    for(int i=0; i<n/2; i++){
        sum += (a[i] + a[n-1-i]) * (a[i] + a[n-1-i]);
    }
    cout << sum;
}

