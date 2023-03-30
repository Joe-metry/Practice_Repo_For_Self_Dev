"""
This program randomly generates who pays
the bill after an outing by friend.
it prompts the user to feed it the names
of all those who took par of the outing and
randomly picks one participant to foot
every other persons bil.
"""

from random import randint
Names = input("Enter names of bill payers with space in between: ")
N_Split = Names.split()
n = len(N_Split)
Rand = randint(0, n - 1)
for i in N_Split:
    if i == N_Split[Rand]:
        print(N_Split[Rand], 'will pay the bill')
