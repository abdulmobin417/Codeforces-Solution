#include<bits/stdc++.h>
using namespace std;

int main()
{
    string month;
    string arr[]={"January","February","March","April","May","June","July","August","September", "October","November","December"};
    cin >> month;
    int k,a=0;
    cin >> k;
    for(int i=0; i<12; i++){
        if(arr[i] == month){
            a=i+k;
            break;
        }
    }
    cout << arr[a%12];

}
