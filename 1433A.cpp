#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int x, temp =0;
        cin >> x;
        for(int i=0; i<=9; i++){
            int t1 = i, t2 = 10*i + t1, t3 = 100*i + t2, t4 = 1000*i + t3;
            if(t1 == x){
                temp = (i-1)*10 + 1;
                break;
            }
            else if(t2 == x){
                temp = (i-1)*10 + 3;
                break;
            }
            else if(t3 == x){
                temp = (i-1)*10 + 6;
                break;
            }
            else if(t4 == x){
                temp = (i-1)*10 + 10;
                break;
            }
        }
        cout << temp << endl;
    }
}

