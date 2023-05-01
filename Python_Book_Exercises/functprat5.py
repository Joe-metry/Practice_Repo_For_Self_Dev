'''
  Code a function with only one parameter, one that handles
  optional keyword arguments. The function prints each
  optional value in turn.
  Call the function, providing two keyword arguments whose
  values are strings. Make everything up.
'''

def onePara(**kwargs):
  for i in kwargs.values():
    print(i)

onePara(kwa1 = 'Monday', kwa2 = 'Before Tuesday')
