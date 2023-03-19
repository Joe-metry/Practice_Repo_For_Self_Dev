# Ask the user for a number and then print the following, where the pattern ends at the number
# that the user enters.
# 1
#  2
#   3
#    4
b = (input('Enter a number: '))
for c in range(len(b)):
    print(b[c])
    print(end=' ' * (c+1))
print("\nThe number entered is:", b)
