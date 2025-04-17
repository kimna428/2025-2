#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
//#include <windows.h> <-- 지금 우분투 사용하고 있는데... 당연히 안되죠?

#include "print_hand.c"


int lose(){
    printf("This is the last day of your life.\n");
    return 0;
}

int win(){
    printf("You are the winner, and I am the wiener\n");
    return 1;
}

int draw(){
    printf("draw...\n You're lucky... but not next time\n");
    return 2;
}

int fight(int input, int check){
    if(check != 0){
        input = (input +3-check)%3;
    }
    switch(input){
        case 0:
            draw();
            return 0;
            break;
        case 1:
            win();
            return 1;
            break;
        case 2:
            lose();
            return 2;
            break;
        default:
            //printf("I said choose between 0 to 2.\n I give you one more chance, so you should don't miss it.\n");
            //return fight(input, check);
    }

}



int main(){
    enum {rock, paper, sissor}; //enum 안에 있는 놈들 0,1,2... 자동적으로 int변수 생성이 되고 기본값을 설정할 수도 있음
    printf("Do you know Rock paper and sissiors? \n");
    printf("This is the moment of butcher\n");
    int input = -1;
    srand(time(NULL));
    int butcher;
    const char* list[] = {"Rock", "Paper", "Sissors"};
    
    while(1){
        printf("If you want to choose Rock, Paper, Sissors\n");
        sleep(1);
        printf("Rock...\n");
        sleep(1);
        printf("Paper...\n");
        sleep(1.5);
        printf("Sissors...!\n");
        butcher = rand()%3;
        
        char input_string[10];
        scanf("%s",input_string);  //scanf("%d",&input);
        //printf("You choose %s\n",input_string);
        for(int i =0; i<3; i++){
            if(strcmp(list[i], input_string)== 0) input =i;
            //printf("%d\n",input);
        }
        if(input>2 || input <0){ 
            printf("I said choose Rock, Paper or Sissors!\nI give you one more chance, so you should don't miss it.\n");
            printf("Open your eyes! Let's start it again!!\n");
            continue;}
        
        
        printf("Actually, I'm %s\n", list[butcher]);
        check_your_choice(butcher,0);
        printf("Your choice is %s\n", list[input]);
        check_your_choice(input,1);

        int result = fight(input,butcher);
        if(result == 1) break;
        input = -1;
    }

}