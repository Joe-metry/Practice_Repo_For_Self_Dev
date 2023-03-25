"""
In this code I will be writing my first Python functions.
The first will be to tell if a number is even while the
next will tell append a character entered by a user to
a word entered by the user.
KEYPOINTS:
A function without a return statement returns the keyword
none.

The syntax of a function definition in python is:
def function_name(formal_parameter):  Note: formal parameters can be more than one

    function specification or description,
    which is a mechanism used to achieve
    Abstraction. (This is done using a multiline comment)

    SOME_CODE <--- This is the logic in the code body to be executed
    return <--- This is where the result is been passed to for the caller.
"""


# Below function tells if a number is odd or even.
def even(i):
    u = i % 2
    if u == 0:
        print(i, 'is even')
    else:
        print(i, 'is odd')
    return u


# Below function appends a character entered by a user to
# a word entered by the user.

def str_():
    A = input('Enter a word: ')
    B = input('Enter a letter: ')

    V = B + A[1: len(A)]
    print(V)
    return V


y = even(8)
J = str_()
