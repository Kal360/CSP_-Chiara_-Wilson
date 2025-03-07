// Chiara Wilson,Updated Finnacial Calculator
#include <stdio.h>
#include <math.h>


int money( float cost, float income, char type[20]){

     float pincome= (cost/income)*100;

     printf("Your %s is $%.2f which is %.2f%%  of your income",type,cost,pincome);

}



void stuff( char thing[20]){
 printf(" What is your %s ?\n",thing);

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
    stuff("income");
    scanf("%f",&income);
    stuff("rent");
    scanf("%f",&rent);
    stuff("utilites");
    scanf("%f",&utilites);
    stuff("groceries");
    scanf("%f",&groceries);
    stuff("transportation");
    scanf("%f",&transportation);
    money(income,income,"income");
    money(rent,income,"rent");
 money(utilites,income,"Utilites");
 money(groceries,income,"Groceries");
 money(transportation,income,"Transportation");



    return 0;
} 