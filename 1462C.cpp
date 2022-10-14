#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, arr[9], n = 9, i = 0;
        cin >> x;
        if(x > 45) cout << -1 << endl;
        else if(x < 10) cout << x << endl;
        else{
            while(x!=0){
                if(x>=n){
                    x = x - n;
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
}
