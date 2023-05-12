'''
  Assign a string to a variable. Then append the string to a text file. Make everything up.
'''

ask = "The name of the King please?"
with open("textfile.txt", "a") as J:
  J.write(ask)
