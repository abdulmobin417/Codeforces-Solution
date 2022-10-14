#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
void sort(char A[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(A[j]>A[j+1]){
                char temp = A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}
 
int main(){
    char arr[100];
    int count=0;
 
    scanf("%s",&arr);
    int length = strlen(arr);
    sort(arr,length);
 
    for(int i=0;i<length;i++){
        if(arr[i]!=arr[i+1]){
            count++;
        }
    }
 
    if(count%2==0){
        printf("CHAT WITH HER!");
    }else{
        printf("IGNORE HIM!");
    }
 
    //printf("%s",arr);
 
 
    return 0;
}