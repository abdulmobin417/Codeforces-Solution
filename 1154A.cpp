#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    for(int i=0; i<4; i++){
        int a;
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    int b,c,d;
    b = arr[3]-arr[0];
    c = arr[2]-b;
    d = arr[1]-b;
    cout << b << " " << c << " " << d;
}


