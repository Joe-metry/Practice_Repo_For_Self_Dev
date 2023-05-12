'''
  Made The above module to have more than one functions:
  below is the function, and how it was being imported
  and called differently.
'''
# CONSIDERED THE MODULE.
greet_msg = """Hello Mr. {name} welcome to our \
website.
"""

# First function:
def greetings(argName):
    greetNow = greet_msg.format(name = argName)
    return greetNow

# Second function:
def addInt(a, b):
    '''Function inmodule to perform some addition'''
    return a + b

# IMPORTING AND CALLING THE MODULE USING THE SECOND METHOD

import greetFormat

storeVal = greetFormat.addInt(8, 9)
print(storeVal)

