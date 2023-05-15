'''
In IDLE code a Python program that creates a CSV file with three rows of three elements each.
Save the Python program to the Desktop and run it.
'''

import csv

with open("newcsv.csv", "w", newline="") as J: # File saved as createcsv
    file_object = csv.writer(J, delimiter=",")
    file_object.writerow(["Name", "Country", "Sport"])
    file_object.writerow(["Ronaldo", "Portugal", "Football"])
    file_object.writerow(["Lebron", "USA", "Basketball"])

with open("newcsv.csv") as J:
    data_holder = csv.reader(J)
    data_list = []
    for data in data_holder:
        data_list += data

    print(data_list)
