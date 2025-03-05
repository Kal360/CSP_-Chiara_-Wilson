// Chiara Wilson, Loops notes
#include <stdio.h>


int main(void){
   // 1. What is a loop? 
    // a loop is a section of code that repeats mulitiple times
// 2.What are the two types of loops?
int start=0;
   while(start<5){
    printf("Hello!\n");
    start++;
   }
   int q;
   for(q=0;q<5;q++){
    printf("%d\n",q);
   }
// 3.What is iteration
  // repeating something with minor changes each time

// 4.What are arays(lists)? 
// a variable holding multiple values
//8. How do you make arrays (lists) lists in C?
 // arrays items all must be the same data type!
int grades[] = {88,97,100,70,72,99,61};
    // 1. set data type first 2. AFTER naming put brakets and write the length of the list. 
    //3. List is surrounded by curly brakets{}4. commas, between each item.
    //print a single item from a list
printf("CSP Grade: %d\n",grades[2]);
    // change an item in the array
    grades[2]=95;
printf("CSP Grade: %d\n",grades[2]);
//Size of lists in bytes
int size = sizeof(grades);
// length of lists in items
int length = sizeof(grades)/sizeof(grades[0]);
printf("The array is %d items long \n",length);
// array with strings
// first brakets sets the lenght of the array
// second bracket sets the length of each string.
char movies[][20]= {"Cars,","Treasure Planet","An American Tale","Marley and me","The Avengers"};
printf("The movie is %s!\n",movies[1]);
int mlength= sizeof(movies)/sizeof(movies[0]);

//9. How do you make for loops in C?
// set the iterator, keeps track of times going through the loop( best practice to set as x or i)
int x;
// in parenthesis ( starting point; ending point; what we count by;)
for(x=0;x<=10;x+=2){
    printf("%d\n",x);
}
int m;
for(m=0;m<mlength;m++);{
printf("%s\n",movies[m]);
}
// 10. How do you make while loops in C?
int w= 100;
while(w>=0){
    printf("%d\n",w);
    w-=10;
}


    return 0;
} 