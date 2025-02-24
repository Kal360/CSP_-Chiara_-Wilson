# Chiara Wilson, Conditional notes
name= input("What is your name ?\n")
#What puts something inside of the “if” statement?
# the tab at the front. Things are tabed over to say its inside of my if statement.
if  name == "Wilson":
    print("Hi Wilson")
#What do if statements do?
#Checks a condition and if it is true it will do a thing
if  name == "Wilson":# <= this is a condition
    print("Hi")
    
   
#What are boolean statements?
# a part of your conditional that is either true or false 
if name == "Wilson": # <= this is a condition
    print("Hi Wilson") #<= This is what it does
else:# This happens if the condition is false
    print(f"Hello {name}!")
#What do else statements do?
if name == "Wilson":# <= this is a condition
    print("Hi Wilson")
    print("Hi Wilson") #<= This is what it does
else:#  if the boolean is false, the else statement happens
    print(f"Hello")
#What kind of statement do you use if you have more than 2 needed outcomes?
num= int(input(" How many cookies are there?\n"))
# computers read things top to bottom
# more specific on top less specific on lower
if num == 0:#<= if always starts the conditional
    print("There are none")
elif num == 1: # everything in between should be elif
    print("there is one")
elif num<4:
    print(" There is a couple")
elif num < 10:
    print(" There are few")
else: #<= else always ends the comnditional
    print(" There are many")
#What do each of the different symbols mean in conditionals?
#< less than
#> greater then
#<= less than or equal to
#>= greater than or equal to
#== equal to
#=== * Does not exist in python
#! Not
#What are the 3 logical operators?
if num <10 and num >5:# And means both booleans must be true
    print("This is a big single digit number")
elif num <10 or >5:# Or menas one has to be true
     print(" This is  a single digit number")
elif not num < 10: # Not changes to check if false
    print(" This is not a single digit number")
#What are logical operators for?
# Allows for code to handle more difficult questions ...
#increases complexity
#What does a nested conditional statement do?
if num <10:
    if num==8:
        print(" this prints at 8")
        print(" The number is less than 10")
    else:
        print(" the number is bigger tha ten")
#How do you write an if statement in C?
#How do you write else statements in C?
#How do you write elif/ else if statements in C?
#How do you write the 3 logical operators in C?