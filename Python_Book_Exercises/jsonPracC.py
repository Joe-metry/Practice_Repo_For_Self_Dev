'''
  A dictionary has been assigned to the variable products.
  Save it in a JSON file.
  Then open the file and read it.
  Assume that the json module has already been imported.
  Make up whatever you need to make up.
'''

with open("products.json", "w") as J:
  json.dump(products, J)
with open("products.json") as f:
 dict_data = json.load(f)
