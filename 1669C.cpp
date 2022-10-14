#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n], even = 0, odd = 0, c1 = 0, c2 = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            if(i%2 == 0){
                if((a[i]+1)%2 == 0) even++;
                else odd++;
            }else{
                if(a[i]%2 == 0) even++;
                else odd++;
            }
            if(a[i]%2 == 0) c1++;
            else c2++;
        }


        if(even == n || odd == n || c1 == n || c2 == n) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
