#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int h, m;
        cin >> h >> m;
        int time = 1440 - (h * 60 + m);
        cout << time << endl;
    }
}


