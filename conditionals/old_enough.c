// Chiara Wilson, Old enough C
#include <stdio.h>
int num;

int main(void){
    printf("How old are you?\n");
    scanf("%d,",&num);
    if(num>=18){
        printf("%d is old enough to vote, go to school, get a permit and drive!\n",num);
    }else if (num <18==16){
        printf(" %d is not old enough to vote but is old enough to drive, get a permit and go to school\n",num);
    }else if (num <18== 15){
        printf("%d is old enough to go to school and get a permit but not old enough to drive, or vote.\n",num);
    } else if (num <3){
    printf(" %d is not old enough to go to school, get a permit, drive, or vote.\n",num);
    }else{
        printf(" You are very old.\n");


    return 0;
}
}







