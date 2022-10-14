#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,n,h,width=0;
    cin >> n >> h;
    vector<int> vec;
    for(int i=0; i<n; i++)
    {
        cin >> a;
        vec.push_back(a);
        if(vec[i]>h) width=width+2;
        else width++;
    }
    cout << width;
}
