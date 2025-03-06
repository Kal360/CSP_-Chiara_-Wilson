# Chiara Wilson, Fizz Buzz Project
for nim in range(1,51):
    if nim % 3 == 0 and nim %5 == 0:
        print("FizzBuzz")
    elif nim %3==0:
        print("Fizz")
    elif nim %5==0:
        print("Buzz")
    else:
        print(nim)