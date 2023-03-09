"""
In this program, I will prompt a user to enter
their investment sum and expected annual interest
and would then calculate their compound interest
for them over a period of 10 years.
"""

inv_amt, exp_int = input("Enter Your investment amount and expected interest:\n").split()
inv_amt = float(inv_amt)
exp_int = float(exp_int) * .01

for i in range(10):
    inv_amt = inv_amt + (inv_amt * exp_int)

print("Your investment increase over 10 years at {} interest is: ${:.4f}".format(exp_int, inv_amt, exp_int))
