'''
In IDLE (See Appendix D), create a Python program that begins by writing some text to a file.
The program appends some more text to the file.
The program reads the contents of the file and displays the contents.
Using any filename you like (that ends in .py), save the Python file to the Desktop.
Run the Python program.
If you've coded correctly the contents of the file will display in the IDLE shell.
  '''

  with open("file.txt", "w") as J:
    J.write("This text is as a result of my practice exercise.")

with open("file.txt", "a") as J:
    J.write("\nHere is some more text, still for practice")

with open("file.txt") as J:
    info = J.read()

print(info)
