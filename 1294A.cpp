#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, a, b, c;
        cin >> a >> b >> c >> n;
        int C = (n + a + b - (2 * c))/3;
        int A = C + c - a;
        int B = C + c - b;
        if(((A + B + C) == n) && A >= 0 && B >= 0 && C >= 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

// C Code

/*
#include<stdio.h>
int main(){
    int t,a,b,c,n,A,B,C,arr[1000];
    scanf("%d",&t);
    for(int i=0; i<t; i++){
        scanf("%d%d%d%d",&a,&b,&c,&n);
        if((a+b+c+n)%3 == 0){
            //printf("YES\n");
            arr[i] = 1;
        }else{
            //printf("NO\n");
            arr[i] = 0;
        }
    }
    for(int i=0; i<t; i++){
        if(arr[i]==1){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }

}
*/