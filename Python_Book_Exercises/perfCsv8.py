'''
  Open a JSON file for writing and write a file to it. Make everything up.
'''

with open("thefile.json", "w") as J:
  json.dump(my_list, J)
