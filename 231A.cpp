#include<stdio.h>
int main(){
    int n,count=0,arr[1000][1000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
 
    for(int i=0;i<n;i++){
        int a = arr[i][0];
        int b = arr[i][1];
        int c = arr[i][2];
        if((a==1 && b==1) || (b==1 && c==1) || (c==1 && a==1)){
            count++;
        }
    }
    printf("%d",count);
 
 
}