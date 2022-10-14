#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,m,k,temp;
        cin >> n >> m >> k;
        int pp = n/k;
        if(pp>m){temp=m;}
        else{temp=pp;}
        int max2 = ((m-temp)+(k-2))/(k-1);
        cout << temp-max2 << endl;
    }
}

