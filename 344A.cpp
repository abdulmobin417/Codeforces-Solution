#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
    int n, num=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i] != arr[i+1]){num++;}
    }
    cout << num;
    return 0;
}
