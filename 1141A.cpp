#include<iostream>
using namespace std;

int main() {
    int n, m, num = 0;
    cin >> n >> m;
    if(m%n != 0) cout << -1;
    else{
        m = m/n;
        while(m%2 == 0){
            m = m / 2;
            num++;
        }
        while(m%3 == 0){
            m = m / 3;
            num++;
        }
        if(m == 1) cout << num;
        else cout << -1;
    }
}
