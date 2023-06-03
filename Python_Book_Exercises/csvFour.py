
'''
In IDLE code a Python program.
Import csv.
Open potions.csv for reading.
Define an empty list.
Read the file.
Loop through the content, adding each line to the list.
Display the list. (This line isn't indented.)
'''

import csv
with open("potions.csv") as J:
    potionsData = csv.reader(J)
    listForPotionData = []
    for every_line in potionsData:
        listForPotionData += every_line

print(listForPotionData)
