#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        vector<int> vc;
        int x,k;
        cin >> x;
        cout << x << endl;
        for(int i=0; i<x; i++){
            vc.push_back(i+1);
        }
        k = x-1;

        for(int i=0; i<x; i++){
            for(int j=0; j<x; j++){
                cout << vc[j] << " ";
            }
            cout << endl;
            if(k>0){
                int temp = vc[k];
                vc[k] = vc[k-1];
                vc[k-1] = temp;
            }
            k--;
        }
    }
}


