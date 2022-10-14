#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n, num = 0;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    for(int i=0; i<n; i++){
        int rem1 = s1[i]-'0';
        int rem2 = s2[i]-'0';
        if(rem1-5 <= rem2 && rem1 > rem2){
            num += rem1 - rem2;
        }
        else if(rem1+5 >= rem2 && rem1 < rem2){
            num += rem2 - rem1;
        }
        else{
            if(rem1 > rem2){
                for(int j=0; j<10; j++){
                    if(rem1 == rem2){
                        break;
                    }
                    if(rem1 == 9){
                        rem1 = 0;
                        num ++;
                    }
                    else{
                        rem1++;
                        num++;
                    }
                }
            }else if(rem1 < rem2){
                for(int j=0; j<10; j++){
                    if(rem1 == rem2){
                        break;
                    }
                    if(rem1 == 0){
                        rem1 = 9;
                        num ++;
                    }
                    else{
                        rem1--;
                        num++;
                    }
                }
            }
        }
    }
    cout << num;
}
