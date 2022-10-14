#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        long long int a[n];
        for(int i=0; i<n; i++) cin >> a[i];
        if(n % 2 == 1) cout << "Mike" << endl;
        else{
            int min1 = a[0], min2 = a[1], index1 = 0, index2 = 0;
            for(int i=0; i<n; i += 2){
                if(a[i] < min1){
                    min1 = a[i];
                    index1 = i;
                }
                if(a[i+1] < min2){
                    min2 = a[i+1];
                    index2 = i + 1;
                }
            }
            if(min1 < min2) cout << "Joe" << endl;
            else if(min1 == min2){
                if(index1 > index2) cout << "Mike" << endl;
                else cout << "Joe" << endl;
            }
            else cout << "Mike" << endl;

        }
    }
}
