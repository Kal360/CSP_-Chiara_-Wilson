// Chiara,Wilson
#include <stdio.h>

//print statement that welcomes my user and tells them what the program does

//ask user what their income is ( variable an input)
float income,rent,utilites,groceries,transportation,savings,expenses,spendings,toal;
//ask user what their rent is ( variable an input)

//#ask user what their utilites is ( variable an input)

//#ask user what their groceries is ( variable an input)

//ask user what their transportation is ( variable an input)

 //calculate savings as 10% of income (income * .1)( variable)

//calculate spending as income- savings-rent-utilites-groceries-transportaion ( variable)

//calculate percent income of rent(rent/income *100) ( variable)

//calculate percent income of utilites (utilites/income *100) ( variable)

//calculate percent income of groceries (groceries/income *100) ( variable)

//calculate percent income of transportation(transportation/income *100) ( variable)

//calculate percent income of spending(spending/income *100) ( variable)


// Your utilites is $XX.XX which is XX% of your income. (Print)

//Your groceries is $XX.XX which is XX% of your income. (Print)

//Your transportation is $XX.XX which is XX% of your income. (Print)

// Your savings is $XX.XX which is XX% of your income. (print)

// Your spending is $XX.XX which is XX% of your income. (Print)
int main(void){
    printf("Hi, welcome to my financial calculator\n");

printf(" How much money do you make each month?");

scanf("%f",&income);

printf("How much do you pay for rent?");

scanf("%f",&rent);

printf("How much do you pay for utilites?");

scanf("%f",&utilites);

printf("How mcuh do you pay for groceries?");

scanf("%f",&groceries);

printf("How much do you pay for transportation?");

scanf("%f",&transportation);

expenses= rent+utilites+groceries+transportation;


    return 0;
} 