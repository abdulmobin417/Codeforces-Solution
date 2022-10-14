#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,m;
    char robot[6][6];
    cin>>t;
    for(int lim=0;lim<t;lim++){
        cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>robot[i][j];
            }
        }
        bool flag = false, flag1 = true;
        int x;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(robot[i][j] == 'R'  && (!flag)){
                    flag = true;
                    x = j;
                }
                else if(robot[i][j] == 'R'){
                    if(j < x) {flag1 = false; break;}
                }
            }
        }
        if(flag1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
