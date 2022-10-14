#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main(){
    string word;
    int low = 0;
    cin >> word;
    int len = word.length();
    for(int i = 0; i < len; i++){
         if (islower(word[i])){
            low++;
         }
    }
    int up = len - low;
    if(up > low){
        for(int i = 0; i < len; i++){
             word[i] = toupper(word[i]);
        }
        cout << word << endl;
    }else{
        for(int i = 0; i < len; i++){
             word[i] = tolower(word[i]);
        }
        cout << word << endl;
    }

}
