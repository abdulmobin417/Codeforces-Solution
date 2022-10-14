#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, sum = 0, secondMax = 0, max = 0;
    cin >> n;
    int vc1[n], vc2[n];
    for(int i=0; i<n; i++){
        cin >> vc1[i];
        sum += vc1[i];
    }
    for(int i=0; i<n; i++){
        cin >> vc2[i];
    }
    for(int i=0; i<n; i++){
        if(vc2[i] >= max){
            secondMax = max;
            max = vc2[i];
        } else if (vc2[i] >= secondMax && vc2[i] <= max){
            secondMax = vc2[i];
        }
    }
    if(sum <= (max + secondMax)) cout << "YES";
    else cout << "NO";
}


