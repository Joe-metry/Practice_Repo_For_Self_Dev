'''
  Save this dictionary to a JSON file. (2 lines of code) Assume the json module has already been imported. Make up the filename and file handle.
bird_dict = {
  "crow": "corvid",
  "robin": "thrush",
  "owl": "raptor",
}
'''

with open("bird_dict.json", "w") as J:
  json.dump(bird_dict, J)
