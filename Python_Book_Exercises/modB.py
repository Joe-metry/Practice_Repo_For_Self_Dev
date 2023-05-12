'''
In IDLE (See Appendix D), code a Python program that
greets the user. Save it to the Desktop.
Code a second Python program that imports the first
program and calls the function. Save it to the Desktop.
Run the second program.
If you've coded correctly, your greeting will display.
'''
# CONSIDERED THE MODULE.
greet_msg = """Hello Mr. {name} welcome to our \
website.
"""
def greetings(argName):
    greetNow = greet_msg.format(name = argName)
    return greetNow

# IMPORTING AND CALLING THE MODULE

from greetFormat import greetings

sendGreetings = greetings("Mac Gregor")
print(sendGreetings)
