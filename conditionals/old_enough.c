// Chiara Wilson, Old enough C
#include <stdio.h>
int num;

int main(void){
    printf("How old are you?\n");
    scanf("%d,",&num);
    if(num>=18){
        printf("%d is old enough to vote!\n",num);
    }else if (num <18){
        printf(" %d is not old enough to vote.\n",num);
    
} 

if(num>=16){
    printf(" %d is old enough to drive\n",num);
}else if (num<16){
    printf(" %d is not old enough to drive\n",num);
}
if( num>=15){
    printf(" %d is old enough to get your learners permit!\n",num);
}else if (num<15){
    printf("You are not old enough to get a learners permit.\n ",num);
}

if (num>=3){
    printf(" %d is old enough to go to school!\n",num);
}else if (num<3){
    printf(" %d is not old enough to go to school.\n",num);
}

return 0;




}
