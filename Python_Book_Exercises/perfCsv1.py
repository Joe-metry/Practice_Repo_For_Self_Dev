'''
  Open a CSV file for writing. Write two rows to it.
  Each row has three elements. Make everything up.
'''

with open("file.csv", "w", newline="") as J:
  handler = csv.writer(J, delimiter=",")
  handler.writerow(["Country", "Time zone", "Currency"])
  handler.writerow(["Canada", "Canadian Dollar", "EST/EDT"])
