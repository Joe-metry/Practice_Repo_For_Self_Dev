'''
Import the csv module.
Open a CSV file for reading using shorthand.
Then read it. Make everything up.
'''

import csv
with open("file.csv") as J:
  storeCsv = csv.reader(J)
