#include<stdio.h>
#include<ctype.h>
int main(){
    int n,i;
    char arr[6000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s",&arr);
        int len=strlen(arr);
        if(len>10){
            printf("%c",arr[0]);
            printf("%d",len-2);
            printf("%c\n",arr[len-1]);
        }else{
            printf("%s\n",arr);
        }
    }
return 0;
}