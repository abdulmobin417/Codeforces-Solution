#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n,cnt;
    cin>>t;
    while(t--){
        cin>>n;
        int mx=0,ans=0;
        for(int i=0;i<n;i++){
            cin>>cnt;
            if(cnt>mx || cnt==mx){
                mx=cnt;
                ans=i+1;
            }
        }
        cout<<ans<<endl;
    }
return 0;
}
