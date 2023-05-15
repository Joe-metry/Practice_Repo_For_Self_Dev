'''
  Code the first three rows to append a row to a CSV file.
  The row contains three strings. Make everything up.
'''


with open("file.csv", "a", newline=",") as J:
  handles_data = csv.writer(J, delimiter=",")
  handles_data.writerow(["Year", "Office", "Pay"])
