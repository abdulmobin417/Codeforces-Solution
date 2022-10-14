#include<bits/stdc++.h>
#include <cctype>
using namespace std;

int main(){
    int n, t, num = 0;
    string word;
    cin >> n >> t;
    cin >> word;

    for(int i = 0; i < t; i++){
        for(int j = 1; j < n; j++){
            if(word[j-1] == 'B' && word[j] == 'G'){
                word[j-1] = 'G';
                word[j] = 'B';
                j++;
            }
        }
    }
    cout << word << endl;


}

