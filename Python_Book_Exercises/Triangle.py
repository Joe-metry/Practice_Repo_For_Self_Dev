# In this program I would be printing the shape of a triangle,
# using the for loop. this would be don by prompting the user
# tell us how many asterisks tall they want their triangle.

a = eval(input("How many asterisks tall do you want your triangle ?\n: "))
for i in range(a):
    print(' *' * (i+1))
