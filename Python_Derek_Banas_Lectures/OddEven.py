"""
This program tells you whether a number is odd or even.
The number must be in the range of 1 - 20.
"""
for i in range(1, 21):
    if i % 2 != 0:
        print("{} is odd".format(i))
    else:
        print("{} is even".format(i))
