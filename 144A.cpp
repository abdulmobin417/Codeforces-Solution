#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,max1=0,min1=101,maxin,minin;
    cin>>n;
    int sol[n];
    for(int i=0;i<n;i++){
        cin>>sol[i];
        if(max1<sol[i]){
            max1=sol[i];
            maxin=i;
        }
        if(min1>=sol[i]){
            min1=sol[i];
            minin=i;
        }
    }



    if(maxin>minin){
        cout<<maxin+(n-2-minin)<<endl;
    }else if(maxin == 0 && minin ==(n-1)){
        cout<<0<<endl;
    }
    else{
        cout<<maxin+(n-1-minin)<<endl;
    }

   return 0;
}
