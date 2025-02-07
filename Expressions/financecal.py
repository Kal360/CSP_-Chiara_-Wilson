# Chiara Wilson, Finacial calculator python

# print statement that welcomes my user and tells them what the program does

# ask user what their income is ( variable an input)
income= float(input("What is your income?\n"))
# ask user what their rent is ( variable an input)
rent=float(input("What is your rent?\n"))
#ask user what their utilites is ( variable an input)
utilites=float(input("How much do you spend on utilites?\n"))
#ask user what their groceries is ( variable an input)
groceries=float(input("How do you spend on groceries?\n"))
#ask user what their transportation is ( variable an input)
transportation=float(input(" How much do you spend transportation\n"))
# calculate savings as 10% of income (income * .1)( variable)
savings=income*0.1
# calculate spending as income- savings-rent-utilites-groceries-transportaion ( variable)
spending=income-savings-rent-utilites-groceries-transportation-savings
# calculate percent income of rent(rent/income *100) ( variable)
rentpercent= (rent/income)*100
# calculate percent income of utilites (utilites/income *100) ( variable)
utilpercent=(utilites/income)*100
# calculate percent income of groceries (groceries/income *100) ( variable)
groceriespercent=(groceries/income)*100
# calculate percent income of transportation(transportation/income *100) ( variable)
transportpercent=(transportation/income)*100
# calculate percent income of spending(spending/income *100) ( variable)
spendpercent=(spending/income)*100

# Your utilites is $XX.XX which is XX% of your income. (Print)
print("your utilites is",utilites, "which is %", utilpercent, "of your income. \n")
# Your groceries is $XX.XX which is XX% of your income. (Print)
print("your groceries is", groceries,"Which is ",groceriespercent, "of your income.\n")
# Your transportation is $XX.XX which is XX% of your income. (Print)
print("Your transportation is ", transportation," which is % ", transportpercent, " of your income.\n")
# Your savings is $XX.XX which is XX% of your income. (print)
print("Your savings are",savings,"which is 10%% of your income.\n")
# Your spending is $XX.XX which is XX% of your income. (Print)

print("Your spending is",spendpercent)