'''
On line 9 ask the user to enter a color and assign
her answer to a variable. On line 15 call a function,
passing it the name of the tuple I've coded and
the name of the variable holding the user's color.
Go to line 2 and code the function.
The function loops through the tuple to see if the
value of the variable is in it. If so, it displays a
message and breaks the loop.


'''

def color_funct(primary_colors, colors):
  nah = False
  for i in primary_colors:
    if i == colors:
      print(colors, "is in tuple")
      nah = True
      break
  if not nah:    
    print(colors, "is not in the tuple.")





colors = input("Enter color ")
primary_colors = ("yellow", "red", "blue")

color_funct(primary_colors, colors)
