#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int i, num=0, temp = 0;
        cin >> i;
        if(i<0){
            i = i*(-1);
        }
        if(i == 1){
            num = 2;
        }else if(i == 2){
            num++;
        }else if(i%3==0){
            num = num+i/3;
        }else{
            temp = i/3 - 1;
            if(i-temp*3 >= 4){
                num = num + temp + 2;
            }else{
                num = num + temp + 1;
            }
        }
        cout << num << endl;
    }
}
