#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, p, sum = 0;
    cin >> n;
    vector<int> a, b;
    for(int i=0; i<n; i++){
        cin >> p;
        if(p % 2 == 0) a.push_back(p);
        else b.push_back(p);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int vc1 = a.size();
    int vc2 = b.size();
    if(vc1 == vc2 + 1 || vc1 + 1 == vc2 || vc1 == vc2) sum = 0;
    else if(vc1 > vc2) for(int i=0; i<vc1-vc2-1; i++) sum += a[i];
    else for(int i=0; i<vc2-vc1-1; i++) sum += b[i];
    cout << sum;
}
