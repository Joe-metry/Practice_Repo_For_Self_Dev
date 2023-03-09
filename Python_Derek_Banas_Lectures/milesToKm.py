# This program is going to convert miles to kilometers.


# 1 mile = 1.60934 km.

# prompting user to enter miles

a = input("Enter miles: ")
miles = int(a)
b = (1.60934 * miles)
print("converting {} from miles to km gives {}".format(a, b))
