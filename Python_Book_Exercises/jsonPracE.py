'''
  Open and read a JSON file containing a dictionary.
  Assign one of the values to a variable.
  The key is a string. Don't indent the line that
  assigns the dictionary value. Make everything up.
'''

with open("dict.json") as J:
  dict_data = json.load(J)
dict_element = dict_data["Canada"]
