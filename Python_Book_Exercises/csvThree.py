
'''
  Open a CSV file and read it. That's five lines of code. Make everything up.
'''

with open("file.csv") as J:
  csvData = csv.reader(J)
  csvList = []
  for j in csvData:
    csvList += j

