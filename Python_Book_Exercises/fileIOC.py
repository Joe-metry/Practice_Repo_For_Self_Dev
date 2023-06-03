'''
  Assign a string to a variable. Open a text file to write to.
  Using the variable, store the string in the file.
'''

xyz = "The string hefre"
with open("text_file", "w") as zyx:
  zyx.write(xyz)
