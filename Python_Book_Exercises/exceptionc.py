'''
  Code five lines that attempt to open a JSON file and read it.
  If the file doesn't open, display a message. Use shorthand.
  Make up what you need to. Assume that the json module has
  already been imported. The third line begins with a double indent.
'''

try:
  with open("new.json") as J:
    file_data = json.load(J)
except FileNotFoundError:
  print("The file you entered is not available.")
