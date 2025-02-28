# Chiara Ivelisse Negron Wilson, Old enough python practice
num=int(input(" How old are you ? \n"))
if num >=18:
    print(" You are old enough to vote,drive,get a permit and to go to school! \n")
elif num<18 and num >=16:
    print(" You are old enough to drive,go to school and get a permit but not to vote. \n")

elif num ==15:
    print(" You are old enough to go to school and get a permit, but not to vote or drive. \n")

elif num < 3:
    print(" You are very young.\n")
elif num <15 or num ==3:
    print(" You are old enough to go to school but not to get a permit,drive, or vote.\n")

else: 
    print(" You are either very young or something went wrong in my code lol.\n")