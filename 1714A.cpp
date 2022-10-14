#include<bits/stdc++.h>
using namespace std;

int Duration(int h1, int m1, int h2, int m2){
    int time;
    if(h1<h2){
        time = (h2*60+m2) - (h1*60+m1);
    }else if(h1 == h2){
        if(m1 <= m2) time = m2 - m1;
        else time = 24 * 60 - (m1 - m2);
    }else{
        time = 24*60 + (h2*60+m2) - (h1*60+m1);
    }
    return time;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n,h,m, minimun=100000;
        cin >> n >> h >> m;
        int arr[n][2]={{0}};
        for(int i=0; i<n; i++){
            int a,b;
            cin >> a >> b;
            int diff = Duration(h, m, a, b);
            if(minimun > diff) minimun = diff;
        }cout << minimun/60 << " " << minimun%60 << endl;
    }
}


