# Chiara Negron Wilson

#  1.What is a loop?
# A section of code that repeats mulitiple times
# 2. What are the two types of loops?
   # for loop
nums=[12,3,66,7,33,2]
for nums in nums:
    print(nums)
    #while loop
    x=0
    while x < 10:
        print(x)
        x+=1
# 3.What is iteration
   # That specific instance of the loop
   # iteration the amount of times you are looping through

# 4.What are lists? 
# A variable that holds multiple values.
nums=[1,2,3,4,5,6,7,6]
names=["Alex", "Kim Dokja", "Dirk", "Harley","Victor",]
print(nums)# prints whole list and is ugly
print(names[1])# prints 1 item from the list

names[2]= "Ellen"
names.pop(2)
names.insert(2, "Jinwoo")
names.insert(2,["Noah","Enoch","Issac","Regan",])
print(names)


# 5.How do you make lists in python? 
# 1. use brackets.
# 2. add in items with correct data types.
# 3. have to have a comma between each item.
# 6.How do you make for loops in python? 
for name in names:
    print(name)
    for x in range(0,101,20):
        print(x)
    
# 7.How do you make while loops in python?
import random 
goose=random.randint(1,20)
x=1# variable to keep count of iterartion
while x <=20:

if x == goose:
    print("Goose!")
    break
else: 
    print("Duck")
    x+=1
