#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y, w, d;
    cin >> y >> w;
    if(y > w) d = 6 - y + 1;
    else d = 6 - w + 1;
    if(6%d == 0) cout << "1/" << 6/d;
    else if (d == 4) cout << "2/" << 3;
    else if(d == 5) cout << "5/" << 6;
}

