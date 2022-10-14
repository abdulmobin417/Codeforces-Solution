#include<stdio.h>
int call(int n, int count){
    if(count==0)
        return n;
 
    if(n%10!=0)
        call(n-1,count-1);
 
    else
        call(n/10,count-1);
 
}
int main(){
    long long int n,k;
    scanf("%d%d",&n,&k);
    printf("%d",call(n,k));
}