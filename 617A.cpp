#include <iostream>

using namespace std;

int main(){
    int x;
    cin >> x;
    if(x > 5){
        int num = x/5;
        int rem = x%5;
        if(rem < 5 && rem != 0){
            num++;
        }
        cout << num << endl;
    }else{
        cout << 1 << endl;
    }



}

