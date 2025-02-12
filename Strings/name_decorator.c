// Chiara Wilson, Name Decorator
#include <stdio.h>
#include <string.h>


char name[50];
 char nametwo[50];
char final[70];
char one[]="<<<";

char two[]=">>>";

 
int main(void){
printf(" Hello, welcome to my program!\n");
printf(" This is a program that you can use to make your name look cooler!\n");
 printf("what is your name?\n");
 scanf("%s",name);
strcat(final,one);
strcat(final,name);
strcat(final,two);
printf("%s\n",final);


    return 0;
} 