# This program is a tip app, that calculates
# the amount a user intends to tip and displays
# the total bill to the user.

bill = eval(input("What's the bill of your shopping ? : $"))
tip_percent = eval(input("What percent of the bill would you like to tip off ? : %"))
tip = (tip_percent * bill)/100
actual_bill = tip + bill
print("The {}% tip you gave is ${}, thank you!".format(tip_percent, tip))
print("The total bill is now: ${}".format(actual_bill))
