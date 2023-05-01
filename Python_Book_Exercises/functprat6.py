'''
    I've coded an empty list. Code a function that fills the list
    In the function definition include three parameters—two parameters
    that accept keyword arguments and a third parameter that accepts
    optional keyword arguments.
    Append each of the first two parameters to the list.
    Then loop through the dictionary of optional values and append
    each of those values to the list. Display the list.
    Call the function, providing four keyword arguments.
'''
# First Approach.

list_to_be_filled = []
def fillList(kwa, kwb, **optKwargs):
  list_to_be_filled = []

  list_to_be_filled.append(kwa)
  list_to_be_filled.append(kwb)

  for i in optKwargs.values():
    list_to_be_filled.append(i)

  print(list_to_be_filled)

fillList(kwa = 4, kwb = 1, opkwa = 0, opkwb = 1)
