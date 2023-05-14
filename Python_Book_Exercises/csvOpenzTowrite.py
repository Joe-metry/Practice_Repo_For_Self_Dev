'''
    Open a CSV file for writing. Then code the next line. Make everything up.
'''

with open("the.csv", "w", newline="") as J:
  handler = csv.writer(J, delimiter=",")
