'''
You now have several CSV files on the Desktop. Read one of them.
Display its contents.
'''

import csv

with open("potions.csv", "r") as file_haandle:
    varA = csv.reader(file_haandle)

    csv_data_list = []
    for data in varA:
        csv_data_list += data

    print(csv_data_list)
