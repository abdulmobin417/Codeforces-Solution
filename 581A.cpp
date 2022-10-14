#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, n=0, num = 0;
    cin >> a >> b;

    while(a!=0 && b!=0){
        a--;
        b--;
        num++;
    }
    if(a != 0) n = a/2;
    else if(b != 0) n = b/2;
    cout << num << " " << n;
}

