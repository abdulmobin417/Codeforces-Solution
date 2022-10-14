#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, x = -1, y = -1;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++) cin >> a[i];
        if(is_sorted(a, a+n)) cout << 0 << endl;
        else{
            set<int> s;
            for(int i=n-2; i>=0; i--){
                if(a[i] > a[i+1]){
                    x = i;
                    break;
                }
            }
            for(int i=0; i<=x; i++) s.insert(a[i]);
            for(int i=n-1; i>x; i--){
                auto it = s.find(a[i]);
                if(it != s.end()){
                    y = i;
                    break;
                }
            }
            for(int i=x+1; i<y; i++) s.insert(a[i]);
            cout << s.size() << endl;
        }
    }
    return 0;
}

