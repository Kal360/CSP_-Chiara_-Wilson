// Chiara Wilson,Updated Finnacial Calculator
#include <stdio.h>
#include <math.h>


int money( float cost, float income, char type[]){



}
//print statement that welcomes my user and tells them what the program does

//ask user what their income is ( variable an input)
float income,rent,utilites,groceries,transportation,savings,expenses,total;


float prent,putilites,pgroceries,ptransportation,psavings, pexpenses;

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

printf(" How much money do you make each month?\n");

scanf("%f",&income);

printf("How much do you pay for rent?\n");

scanf("%f",&rent);

printf("How much do you pay for utilites?\n");

scanf("%f",&utilites);

printf("How mcuh do you pay for groceries?\n");

scanf("%f",&groceries);

printf("How much do you pay for transportation?\n");

scanf("%f",&transportation);

expenses= rent+utilites+groceries+transportation;

savings= income *.2;

total= income-savings-expenses;

prent= rent/income*100;

putilites= utilites/income*100;

pgroceries= groceries/income*100;

ptransportation= transportation/income*100;

pexpenses=expenses/income*100;

psavings=savings/income*100;

printf(" Your monthly income is $%.2f\n",income);


printf("Your monthly expenses are $%.2f\n" "Which is %.1f%% of your income\n",expenses,pexpenses);

printf("Your monthly savings are $%.2f\n" "which is %.1f%% of your income\n",savings,psavings);

printf("You have $%.2f\n",total );

printf("Your expenses are %.1f%% of your income.\n",pexpenses);
    return 0;
} 