# This program prints a rectangle using asterisks
# according to the taste of the user.
a = eval(input("How many stars verticalY ? :\n"))
b = eval(input("How many stars horizontalY ? :\n"))

for i in range(0, a):

    for j in range(0, b):
        print(' *', end="")
    print()
