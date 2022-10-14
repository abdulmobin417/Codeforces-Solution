#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, num = 0;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int max = a[0], min = a[0];
    for(int i=1; i<n; i++){
        if(a[i] < min){
            min = a[i];
            num++;
        }else if(a[i] > max){
            max = a[i];
            num++;
        }
    }
    cout << num;
}


