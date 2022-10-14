#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int b, k, sum = 0;
    cin >> b >> k;
    long long int a;
    while(k--){
        cin >> a;
        if(k==0) sum += a;
        else sum += b*a;
    }
    if(sum%2==0) cout << "even";
    else cout << "odd";
}


