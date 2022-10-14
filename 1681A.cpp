#include<bits/stdc++.h>
using namespace std;


int main(){
    int t,n,m,sa,sb,maxa,maxb;
    int a[51],b[51];
    cin>>t;
    for (int x=0; x<t; x++){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }cin>>m;
        for(int j=0;j<m;j++){
            cin>>b[j];
        }
        maxa=a[0];
        for(int i=1;i<n;i++){
            if(a[i]>maxa){
                maxa=a[i];
            }
        }
        maxb=b[0];
        for(int i=1;i<m;i++){
            if(b[i]>maxb){
                maxb=b[i];
            }
        }
        if(maxa>maxb){
            cout<<"Alice"<<endl;
            cout<<"Alice"<<endl;
        }else if(maxa<maxb){
            cout<<"Bob"<<endl;
            cout<<"Bob"<<endl;
        }else{
            cout<<"Alice"<<endl;
            cout<<"Bob"<<endl;
        }
    }

  return 0;
}

