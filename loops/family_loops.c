// Chiara Wilson, TEMPLATE
#include <stdio.h>


int main(void){
    char names[6][20]={"Noah","Enoch","Issac","Regan","Erin","Caleb"};

    int x;
    for(x=0;x<6;x++){
        printf("Hello %s!\n",names[x]);
    }
    return 0;
} 