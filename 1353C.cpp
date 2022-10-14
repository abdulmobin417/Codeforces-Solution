#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        unsigned long long int n, moves = 0;
        cin >> n;
        if(n > 1){
            for(long long int i=0; i<=n/2; i++){
                moves += 8 * i * i;
            }
        }
        cout << moves << endl;
    }
}

