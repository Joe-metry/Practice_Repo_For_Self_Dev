'''
  Open a CSV file for writing. Then code the next line. Make everything up.
'''

with open("file_name.csv", "w", newline="") as J:
  data_handler = csv.writer(J, delimiter=",")
