#include<bits/stdc++.h>
using namespace std;

int main(){
    int k,r,cnt=1,x;
    cin>>k>>r;
    for(int i=1;i<10;i++){
        x=k*i;
        if(x%10 == r || x%10 == 0){
            break;
        }
        cnt++;
    }
    cout<<cnt;
   return 0;
}
