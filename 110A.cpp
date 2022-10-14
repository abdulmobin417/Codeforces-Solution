#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b, k, sum = 0;
    cin >> b >> k;
    int n = k, a[k];
    for(int i=0; i<n; i++){
        cin >> a[i];
        sum = sum + (a[i] * round(pow(b, k-1)));
        k--;
    }
    if(sum%2==0) cout << "even";
    else cout << "odd";
}


