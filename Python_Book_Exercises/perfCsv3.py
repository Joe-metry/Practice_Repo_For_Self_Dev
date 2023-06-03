'''
Method 2

In IDLE code a Python program that creates a CSV file with three rows of three elements each.
Save the Python program to the Desktop and run it.
'''
import csv
import createcsv

with open("newcsv.csv") as J:
    data_holder = csv.reader(J)
    data_list = []
    for data in data_holder:
        data_list += data

    print(data_list)
