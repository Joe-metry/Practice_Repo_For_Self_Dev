# In this program I would be printing the shape of an inverted
# triangle, using the for loop. this would be done by prompting
# the user tell us how many asterisks tall they want their
# inverted triangle.

a = eval(input("How many asterisks tall do you want your inverted triangle ?\n: "))
for i in range(a, 0, -1):
    print(' *' * (i+1))
print(' *')
