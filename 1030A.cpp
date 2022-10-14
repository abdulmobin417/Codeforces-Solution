#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,value,result=0;
    cin >> n;
    for(int i=0; i<n; ++i)
    {
        cin >> value;
        if(value == 1) result=1;
    }
    if(result == 0) cout << "EASY";
    else if(result == 1) cout << "HARD";

}

