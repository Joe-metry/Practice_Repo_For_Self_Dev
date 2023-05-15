'''
  Code all five lines to read a CSV file. Use shorthand. Make everything up.
'''


with open("thefile.csv") as J:
  data_h = csv.reader(J)
  data_row = []

  for row in data_h:
    data_row += row
