# Write a program that asks the user for a number of seconds and prints out how many minutes
# and seconds that is. For instance, 200 seconds is 3 minutes and 20 seconds. [Hint: Use the //
# operator to get minutes and the % operator to get seconds.]

NumSec = eval(input("Enter any number of seconds: \n"))
Mins = NumSec//60
Sec = NumSec % 60
if NumSec % 60 == 0:
    print("{}" " " "seconds is" " " "{}" " " "minutes.".format(NumSec, Mins))
else:
    print("{}" " " "seconds is" " " "{}" " " "minutes" " " "and" " " "{}" " " "seconds.".format(NumSec, Mins, Sec))
