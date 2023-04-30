
'''
Code a function that has two keyword parameters,
first_name and last_name. The function displays
the concatenation of first_name plus a string that's
just a space plus last_name.
Call the function, assigning your first and last names
to the keywords.

'''

def kwargs(first_name, last_name):
  print(first_name + " " + last_name)
  
kwargs(last_name = "Ubi", first_name = "Joseph")
