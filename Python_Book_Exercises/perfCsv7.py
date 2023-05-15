'''
In IDLE code a Python program that appends a row
to one of the CSV files you've already created.
Save the Python program to the Desktop and run it.
''' 

import csv
import createcsv
import appendcsv

with open("newcsv.csv", "a", newline="") as J:
    handles_data = csv.writer(J, delimiter=",")
    handles_data.writerow(["Messi", "Argentina", "Football"])


with open("newcsv.csv") as J:
    data_holder = csv.reader(J)
    data_list = []
    for data in data_holder:
        data_list += data

    print(data_list)
