'''
I've coded a dictionary containing three lists. And I've assigned
a variable, index_number, a value of 0.
Loop through the third list looking for the element False.
When the loop gets to the element you're looking for, display the
current value of index_number, which will be the element's index number.
Before the loop gets to that element, when the element being checked
isn't False, increment index_number.
This will be the index number of the next element to be checked in the list.

'''

dict = {
  "list_0": [3, 1, 6],
  "list_1": ["apples", "pears", "oranges"],
  "list_2": [True, False, True],
}
index_number = 0

for item in dict["list_2"]:
  if item != False:
    index_number += 1
  else:
    print(index_number)
    break
