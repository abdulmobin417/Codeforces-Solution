#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, num = 0;
    cin >> n;
    while(n != 0){
        if(n >= 100){
            num += n/100;
            n = n%100;
        }else if( n >= 20){
            num += n/20;
            n = n%20;
        }else if( n >= 10){
            num += n/10;
            n = n%10;
        }else if( n >= 5){
            num += n/5;
            n = n%5;
        }else if( n >= 1){
            num += n/1;
            n = n%1;
        }
    }
    cout << num;
}




