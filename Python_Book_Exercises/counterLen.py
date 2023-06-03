'''
As long as the counter is less than the length of list_of_names,
append an element of list_of_names to second_list_of_names.
Then increment the counter.
(Use the counter as the index of each element as you loop through list_of_names.)
'''

list_of_names = ["Farina", "Madi", "Annie", "Max", "Vlad", "Punya", "Muhammad"]
second_list_of_names = []
counter = 0

while counter < len(list_of_names):
  for elements in list_of_names:
    second_list_of_names.append(elements)
    counter += 1

print(second_list_of_names)
