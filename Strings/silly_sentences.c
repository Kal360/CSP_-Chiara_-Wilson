// Chiara Wilson, silly sentences
#include <stdio.h>
// empty strings variables for user words(minimum 3)

char name[50];

char color[50];

char action[50];

char adjective[50];

int main(void){
    
// A welcome for the user telling them what the programm is( print)
printf("Welcome! Welcome to my program.\n");

printf("This program creates a silly story based on the words you type into the program.\n(By the way you can only type in one word for each thing.)\n ");
// Ask user for words ( print satement with a question with a scanf to set to variable) 
//( in c we need to tell the user that they can only type 1 word.)

printf("Please type in the name of one famous person.\n");
scanf("%s",name);
printf(" Please type in a color\n ");
scanf("%s",color);
printf("Please type in one action\n");
scanf("%s",action);
printf(" please type in one adjective\n");
scanf("%s",adjective);
printf(" I pinky promise I will not %s %s while staring intently at a %s %s",action,color,adjective,name);
// print out story with the variables inserted (" welcome %s to my program",name)



















    return 0;
} 