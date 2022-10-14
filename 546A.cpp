#include <iostream>

using namespace std;

int main(){
    int k, n, w;
    cin >> k >> n >> w;
    int a = k;
    for(int i = 2; i <= w; i++){
        k = k + (a * i);
    }

    if((k - n) >= 0){
        cout << k - n << endl;
    }else{
        cout << 0 << endl;
    }


}

