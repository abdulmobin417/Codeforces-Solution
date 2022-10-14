#include <stdio.h>
#include <string.h>
int main(){
    int n,x=0;
    char arr[150], str1[] = "X++", str2[] = "++X", str3[] = "X--", str4[] = "--X";;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",&arr);
        int result1 = strcmp(arr, str1);
        int result2 = strcmp(arr, str2);
        int result3 = strcmp(arr, str3);
        int result4 = strcmp(arr, str4);
        if((result1==0) || (result2==0)){x++;}
        else if((result3==0) || (result4==0)){x--;}
        else{continue;}
    }
    printf("%d",x);
}