#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n , l, a, num = 0, temp = 0;
    cin >> n >> l >> a;
    long long int arr[n][2];
    for(long long int i=0; i<n; i++){
        cin >> arr[i][0] >> arr[i][1];
    }
    if(n == 0) num += l / a;
    else{
        for(long long int i=0; i<n; i++){
            if(arr[i][0] - temp >= a){
                num += (arr[i][0] - temp) / a;
            }
            temp = arr[i][0] + arr[i][1];
        }
        if(l - temp >= a) num += ((l - temp) / a);
    }
    cout << num;
}
