// Chiara Wilson, getting the time
#include <stdio.h>
#include<time.h>

int main(void){
    // Time since Jan 1st 1970
   time_t seconds;
seconds=time(NULL);
//printf("Seconds since Jan 1 19070 = %d\n",seconds);



// Current Time
time_t rawtime;
struct tm * timeinfo;

time(&rawtime);
timeinfo= localtime(&rawtime);
//printf("Current time and date is %s\n",asctime(timeinfo));

// current hour
time_t now= time(NULL);

struct tm* tm_struct = localtime(&now);
int hour= tm_struct->tm_hour;
printf("%d\n",hour);// Military time! (0-23)
    return 0;
} 