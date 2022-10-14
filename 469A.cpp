#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, p, q, a, count = 0;
    cin >> n >> p;

    vector<int> vec;

    for(int i=0; i<p; i++){
        cin >> a;
        vec.push_back(a);
    }
    cin >> q;
    for(int i=0; i<q; i++){
        cin >> a;
        vec.push_back(a);
    }

    sort(vec.begin(), vec.end());

    for(int i = 0 ; i < p+q ; i++){
        if(vec[i] != vec[i+1]){
            count++;
        }
    }
    if(n == (count)){
        cout << "I become the guy.";
    }else{
        cout << "Oh, my keyboard!";
    }

    return 0;
}




