// Chiara Wilson, TEMPLATE
#include <stdio.h>
#include <time.h>
int num;

int main(void){
time_t rawtime;
struct tm * timeinfo;

   time_t now= time(NULL);

struct tm* tm_struct = localtime(&now);
int hour= tm_struct->tm_hour;

if(hour>=0 && hour<=11){
    printf("Good morning!\n");
}else if( hour== 12 && hour <=16){
    printf("Good afternoon!\n");
}else if ( hour ==17 && hour <= 20){
    printf("Good evening! \n");
}else{
    printf("Good night\n");
}
    return 0; 
} 