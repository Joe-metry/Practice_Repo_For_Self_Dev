'''
When the contents of the file greet.txt are displayed, here's what is displayed:
Hello.
Have a nice day.
Write the string to the file. Make up the file handle.
  '''

  with open("greet.txt", "w") as J:
  J.write("Hello\nHave a nice day")
