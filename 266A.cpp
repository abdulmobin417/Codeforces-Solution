#include <iostream>
using namespace std;

int main(){
    int n, i, j, num = 0;
    string a;

    cin >> n;
    cin >> a;

    for(i = 0; i < n; i++){
        for(j = i + 1; j < n; j++){
            if(a[i] == a[j]){
                num++;
                i++;
            }else{
                //i = j;
                break;
            }

        }
    }
    cout << num << endl;


}

