'''
In IDLE code a Python program that tries to open a text
file for reading. Ask it to open a file that doesn't exist.
If the file isn't found, display a message.
Save the Python program to the Desktop and run it.
'''

try:
  with open("text_file_dosnt_exit.txt") as J:
    J.read()
except FileNotFoundError:
  print("Ouch, The file is not available now!")
