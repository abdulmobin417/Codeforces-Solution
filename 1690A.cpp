#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,k,h1,h2,h3,a;
    cin>>k;
    for(int i=0;i<k;i++){
        cin>>n;
        a=n/3;
        if(n%3 == 0){
            cout<<a<<" "<<a+1<<" "<<a-1<<endl;
        }else if(n%3 == 1){
            cout<<a<<" "<<a+2<<" "<<a-1<<endl;
        }else if(n%3 == 2){
            cout<<a+1<<" "<<a+2<<" "<<a-1<<endl;
        }


    }
   return 0;
}
