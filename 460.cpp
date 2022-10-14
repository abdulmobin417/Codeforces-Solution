#include<stdio.h>
int main(){
    int n,m,i=0,pair=0;
    scanf("%d%d",&n,&m);
    while(1){
        if(n==0){break;}
        else if(i%m==0){n=n+1-1;}
        else{n=n-1;}
        i++;
    }
    printf("%d",i-1);
}