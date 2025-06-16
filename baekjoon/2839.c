#include <stdio.h>

int main(){
    int N;
    int number = 0;
    scanf("%d",&N);
    number = N/5;
    int remain = N%5;
    if(number == 0){
        if(N%3 == 0) printf("%d", N/3);
        else printf("-1");
    }
    else if(remain == 0) printf("%d", number);
    else{
        if(remain == 3){
            printf("%d",number+1);
        } else if(remain == 1 && number>0){
            printf("%d",number-1+2);
        } else if(remain == 4 && number>0){
            printf("%d",number-1+3);
        } else if(remain == 2 && number>1){
            printf("%d",number-2+4);
        } else printf("-1");
    }

}