'''
In IDLE code a Python program.
Import csv.
Open potions.csv for reading.
Define an empty list.
Read the file.
Loop through the content, adding each line to the list.
Display the list. (This line isn't indented.)
'''
# Using another method to import the reader fuction from
# the csv module, and also syntaxically calling it without
# the dot notation.

from csv import reader
with open("potions.csv") as J:
    potionsData = reader(J)
    listForPotionData = []
    for every_line in potionsData:
        listForPotionData += every_line

print(listForPotionData)
