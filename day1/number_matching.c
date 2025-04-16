#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(){
    srand(time(NULL));
    int arr[6], ans[6];
    printf("야구 게임 시작! 1~13까지 숫자 6개를 넣어주세여여\n");
    for(int i= 0; i<6; i++){
        while(1){
            ans[i] = rand()%13;
            int check = 0;
            for(int j =0; j<i; j++){
                if(ans[i]== ans[j]) check =1; 
            }
            if(check == 0) break;
        }
    }
    for(int i = 0; i<6; i++){
        printf("%d ", ans[i]);
    }
    printf("\n");
    
    int strike =0;
    int ball = 0;
    while(strike<6){
        for(int i =0; i<6; i++){
            scanf("%d",&arr[i]);
        }

        for(int i= 0; i<6; i++){
            for(int j =0; j<6; j++){
                if(ans[i]==arr[j] && i ==j) {
                    strike ++;
                    //printf("%d에서 %d스트라이크", arr[j], strike);
                }
                else if(ans[i] == arr[j] && i!=j){
                    ball ++;
                    //printf("%d에서 %d볼", arr[j], ball);
                }
                
            }
        }
        printf("%d 스크라이크, %d 볼 입니둥\n",strike,ball);
        if(strike != 6){
            strike = 0;
            ball = 0;
        }
        else{printf("님이 이겼삼\n");}

}
    
}
