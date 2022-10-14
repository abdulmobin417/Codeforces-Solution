#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int s, arr[9], n=9, i=0;
        cin >> s;
        while(s!=0){
            if(s>=n){
                s = s - n;
                arr[i++] = n;
            }
            n--;
        }
        for(int j=i-1; j>=0; j--){
            cout << arr[j];
        }
        cout << endl;
    }
}

