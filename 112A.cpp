#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100], str1[100];
    int ans = 0;

    scanf("%s %s", &str, &str1);
    for(int i=0;i<=strlen(str);i++){
        if(str[i]>=65&&str[i]<=90){
            str[i]=str[i]+32;
        }
        if(str1[i]>=65&&str1[i]<=90){
            str1[i]=str1[i]+32;
        }
        if(str[i] < str1[i]){
            ans = -1;
            break;
        }else if(str[i] > str1[i]){
            ans = 1;
            break;
        }
    }
    printf("%d", ans);

}


