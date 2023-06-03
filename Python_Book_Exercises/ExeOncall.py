'''
  Rewrite this code, replacing 2 + 4 with a function call
  that includes the two numbers as parameters and does the math.
  Make up the function name.
def calc():
  return 2 + 4
'''
def calc(x, y):
  return x + y

def caller():
  return calc(2, 4)
print(caller())
