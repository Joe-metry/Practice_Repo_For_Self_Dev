"""

This programs tells you if you're qualified to go
to school depending on your age and tells you the 
grade to start from accordingly

"""

age = eval(input("Enter age:\n"))

if age == 5:
    print("Go to kindergarten")

elif age == (6 - 17):
    print("Go to grade 1 through 12")
elif (age > 17) and (age < 89):
    print("Go to college")
elif(age < 5) or (age > 88):
    print("You seem too young or old to attend school")
else:
    print("Wrong input")
