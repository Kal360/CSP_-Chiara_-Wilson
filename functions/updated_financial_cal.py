# Chiara Wilson, Updated Finacial calculator python
def info(cost,income,type):
    # Your utilites is $XX.XX which is XX% of your income. (Print)
    percent= (cost/income)*100
    print(f"Your {type} is ${cost:.2f} which is {percent}% of your income.\n")

def ask(stuff):
    return float(input(f"What is your monthly {stuff}"))

# print statement that welcomes my user and tells them what the program does
print("Welcome to my calculator that will help manage your monthly finances.\n")
# ask user what their income is ( variable an input)
income= ask("income")
# ask user what their rent is ( variable an input)
rent=ask("rent")
#ask user what their utilites is ( variable an input)
utilites= ask(" utilites")
#ask user what their groceries is ( variable an input)
groceries= ask("groceries")
#ask user what their transportation is ( variable an input)
transportation= ask("transportation")
# calculate savings as 10% of income (income * .1)( variable)
savings=income*0.1
# calculate spending as income- savings-rent-utilites-groceries-transportaion ( variable)
spending=income-savings-rent-utilites-groceries-transportation-savings
info(rent,income,"rent")
info(utilites,income,"utilites")
info(groceries,income,"groceries")
info(transportation,income,"transportation")
info(savings,income,"savings")
info(spending,income,"spending")