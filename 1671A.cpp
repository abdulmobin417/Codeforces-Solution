#include<bits/stdc++.h>
using namespace std;



int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        int A = 0, B = 0, test = 1;
        cin >> s;
        for(int i=0; i<s.length(); i++){
            if(s[i] == 'a'){
                A++;
                if (s[i+1] == 'a'){
                    //b er code
                    if(B != 0){
                        if(B%2 == 0 || ((B-3)%2 == 0 && B != 1)){}
                        else{
                            test = 0;
                            break;
                        }
                        B = 0;
                    }
                }else{
                    //a er code
                    if(A != 0){
                        if(A%2 == 0 || ((A-3)%2 == 0 && A != 1)){}
                        else{
                            test = 0;
                            break;
                        }
                        A = 0;
                    }
                }
            }
            else{
                B++;
                if (s[i+1] == 'b'){
                    //a er code
                    if(A != 0){
                        if(A%2 == 0 || ((A-3)%2 == 0 && A != 1)){}
                        else{
                            test = 0;
                            break;
                        }
                        A = 0;
                    }
                }else{
                    //b er code
                    if(B != 0){
                        if(B%2 == 0 || ((B-3)%2 == 0 && B != 1)){}
                        else{
                            test = 0;
                            break;
                        }
                        B = 0;
                    }
                }
            }
        }
        if(test) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}



