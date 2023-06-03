'''
    Call the function, providing three positional arguments.
    The first argument is the name of the list, list_of_numbers.
    The second argument is the the index number of the element to increment.
    The third argument is a math expression, for example 9 / 3.
    Display the changed element.
'''

list_of_numbers = [12, 24, 36]

def increment_list_element(list_name, index_of_element, how_much_to_add):
  list_name[index_of_element] += how_much_to_add

increment_list_element(list_of_numbers, 2, 9**2)

print(list_of_numbers)
