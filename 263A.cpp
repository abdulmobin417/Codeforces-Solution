#include <stdio.h>
int main() {
    int arr[5][5], row=0, col=0, num=0;

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            scanf("%d", &arr[i][j]);
            if(arr[i][j]==1){
                row = i;
                col = j;
            }
        }
    }
    if(row>2){
        num = row - 2;
    }else{
        num = 2 - row;
    }if(col>2){
        num = num + col - 2;
    }else{
        num = num + 2 - col;
    }
    printf("%d", num);
}

