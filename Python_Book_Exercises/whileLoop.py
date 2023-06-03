'''
  Code a function that asks for the user's input. Keep asking
  until the user enters "You're right" Make up the name of the function,
  the text that prompts the user, and the variable that holds the user's
  input. Remember to declare the variable as an empty string in line 2.

'''

def userInp():
  inp = ''  
  while inp.lower() != "you're right":
    inp = input('Enter "You\'re right" or I\'ll keep repeating myself\n\n')

userInp()
