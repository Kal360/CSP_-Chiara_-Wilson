# Chiara Negron Wilson, Function notes

# functions are places that hold actions to be reused
#number= int(input("Please tell me a number:\n"))
def add(numOne,numTwo):# Parameters set the name of the variables( Just for trhe function)
    return numOne+numTwo

    #print (numOne+numTwo)


#print(add(number+21))# arguments set the value of variable.
#print(add(2,100))
#print(add(3,50))

def values(type):
    return input(f"Please give me a {type}:\n")

name =values("name")

place =values("place")

verb =values("verb(past tense)")

print(f"{name} was really fast getting to {place} because they {verb} the whole way there.")