# Write a program that generates a random decimal number between 1 and 10 with two decimal
# places of accuracy. Examples are 1.23, 3.45, 9.80, and 5.00.

from random import randint
x = randint(1, 10)
y = x/9
z = round(y, 2)
print(z)
