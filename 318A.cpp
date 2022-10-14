#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n, k;
    cin >> n >> k;
    long long int Kth_odd = 2 * k -1;
    if(Kth_odd <= n) cout << Kth_odd;
    else{
        if(n % 2 == 0) cout << (k - (n / 2)) * 2;
        else cout << (k - ((n + 1) / 2)) * 2;
    }
}
