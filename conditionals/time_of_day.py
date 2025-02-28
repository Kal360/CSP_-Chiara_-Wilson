# Chiara Wilson, Time of day project
import time
current=time.time()
local_time=time.localtime(current)
day = local_time.tm_wday
hour = local_time.tm_hour

if hour >= 0 and hour <= 11:
    print("Good Morning!\n")
elif hour == 12 and hour <= 16:
    print("Good afternoon!\n")
elif hour==17 and hour <=20:
    print("Good evening\n")
else:
    print("Good night\n")




