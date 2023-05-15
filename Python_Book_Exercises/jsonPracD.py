'''
  Open and read a JSON file containing a list.
  Assign one of the list elements to a variable.
  Don't indent the line that assigns the list element.
  Make everything up.
'''

with open("thefile.json") as J:
  list_data = json.load(J)
assigned = list_data[1]
