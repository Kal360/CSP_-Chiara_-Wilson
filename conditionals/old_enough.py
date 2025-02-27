# Chiara Ivelisse Negron Wilson, Old enough python practice
num=int(input(" How old are you ? \n"))
if num >=18:
    print(" You are old enough to vote,drive,get a permit and to go to school! \n")
elif num<18:
    print(" You are not old enough to vote. \n")

elif num >= 16:
    print(" You are old enough to drive,go to school but not to vote. \n")
elif num <16:
    print(" You are not old enough to drive. \n")

elif num >=15:
    print(" You are old enough to get a learner's permit ! \n")
elif num <16:
    print(" You are not old enough to get a learner's permit.\n")

elif num >=3 :
    print(" You are old enough to go to school! \n")
elif num <3:
    print(" You are not old enough to go to school,vote or drive. \n")
else: 
    print(" You are either very young or something went wrong in my code.\n")