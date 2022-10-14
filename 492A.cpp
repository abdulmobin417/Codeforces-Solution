#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0, i;
    cin >> n;
    for(i=1; sum <= n; i++){
        sum += i * (i + 1) / 2;
    }
    cout << i-2;
}


