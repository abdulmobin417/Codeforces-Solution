#include<bits/stdc++.h>
using namespace std;

int main()
{
    int val1,val2,n,result=0;
    cin >> n;
    for(int i=0; i<n; ++i)
    {
        cin >> val1 >> val2;
        if(val2-val1 >= 2) result++;
    }
    cout << result;

}
