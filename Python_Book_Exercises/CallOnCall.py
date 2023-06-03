'''
    Code a function that displays something.
    The value to display is its only parameter.
    Code another function that calls the first
    function, passing it your name.
    Call the second function.
  '''

def display(a):
    print(a)
    
def callFunc(name):
  display(name)
  
callFunc("Joe")
