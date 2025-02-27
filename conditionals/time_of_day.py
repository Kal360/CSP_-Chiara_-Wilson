# Chiara Wilson, Time of day project
import time
current=time.time()
local_time=time.localtime(current)
day = local_time.tm_wday
hour = local_time.tm_hour
if hour== 0-11 :
    print("Good Morning!\n")



