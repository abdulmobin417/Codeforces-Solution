#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n], sum = 0, sum1 = 0, num = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        sum += a[i];
    }
    int half = sum / 2;
    sort(a, a + n, greater<int>());
    for(int i=0; i<n; i++){
        if(sum1 > half) break;
        sum1 += a[i];
        num++;
    }
    cout << num;
}