'''
  Write some text to a text file. Then append some more text to that file. Make everything up.
  '''

  with open("file.txt", "w") as J:  
  J.write("Everything in here is made up")
with open("file.txt", "a") as J:
  J.write("\nNow here comes some more made up text.")
