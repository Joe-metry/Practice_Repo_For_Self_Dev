'''
Begin by coding the function call on line 12
It has three keyword arguments. The values are
the name of the dictionary, the name of one of
the lists in the dictionary, and the index number
of an element in the list. The function name
and the keys are your choice.
Code the function starting on line 4.
It targets the element within the list within
the dictionary. Then it displays the targeted name.

'''

# First code the function call on line 12.
# Then come back and code the function starting on line 4.
# The function will take two or three lines, depending on how you approach it.
def functCall(arg1, arg2, arg3):
  target = arg3
  print(target)


members = {
  "adults": ["Ditmar", "Salvador", "Punya"],
  "children": ["Caliban", "Eustis", "Ali"],
}

functCall(arg1 = members, arg2 = members['children'], arg3 =  members['children'][1])
