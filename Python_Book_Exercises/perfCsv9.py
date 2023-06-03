'''
In IDLE code a Python program that imports the json module...
creates a list...
and writes the list to a JSON file.
Save the Python program to the Desktop and run it.
'''

import json

my_list = ["Soccer", "Music", "Investor", "Farmer"]
with open("listData.json", "w") as J:
    json.dump(my_list, J)
