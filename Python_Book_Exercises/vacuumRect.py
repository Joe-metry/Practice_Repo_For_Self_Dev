"""
 
This program prints a Rectangular shape like
the one below:

* * * * * * * * * * * * * * * * 
*                             *
*                             *
* * * * * * * * * * * * * * * *

But the user gets to decide how wide the the
rectangle would be, by specifying the number
of asterisks.

"""

a = eval(input("How many asterisks wild would you like your rectangle to be?\n: "))

for i in range(0, 1):
    print('* ' * a)
for j in range(0, 1):
    print("*" + (" " * ((a * 2) - 3)) + "*")
for k in range(0, 1):
    print("*" + (" " * ((a * 2) - 3)) + "*")
for l in range(0, 1):
    print('* ' * a)
