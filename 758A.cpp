#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, max1 = 0, sum = 0;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
        sum += a[i];
        if(max1 < a[i]) max1 = a[i];
    }

    int result = max1 * n - sum;
    cout << result;

}


