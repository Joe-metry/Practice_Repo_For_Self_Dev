'''
In IDLE code a Python program that imports the json module...
reads the JSON file containing a list that you coded in the last chapter...
and displays the list.
Save the Python program to the Desktop and run it.
'''

import json
import jsonA # Not necessary to import!

with open("listData.json") as J:
    list_data = json.load(J)
print(list_data)
print(list_data[1])
