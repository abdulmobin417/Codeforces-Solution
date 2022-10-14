#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,d,num=0;
    cin >> a >> b >> c >> d;
    if(a==b || a==c || a==d) num++;
    if(b==c || b==d) num++;
    if(c==d) num++;
    cout << num;
}



