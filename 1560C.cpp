#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int k, i = 1, j = 2;
        cin >> k;
        while(true){
            if(k-i<=0) break;
            else{
                i = j * j;
                j++;
            }
        }
        int r = 0, c = j-1, val = ((j-1)*(j-1))+1, check = 0;
        while(true){
            if(val == k) break;
            else{
                if(check == 0) r++;
                else if(check == 1) c--;
                if(r == c) check = 1;
            }
            val--;
        }
        cout << c << " " << r << endl;
    }
}


