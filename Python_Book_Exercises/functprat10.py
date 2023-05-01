'''
  I've code a dictionary. Code a function that will change
  one of the values in the dictionary.
  The function has three parameters—the name of a dictionary,
  a dictionary key, and a dictionary value.
  The function uses these parameters to change one of the
  values in the dictionary. Then it returns the revised dictionary.
  Call the function, providing three keyword arguments—the name
  of the dictionary, the key for the animal whose sound you're
  going to change, and the new sound for the animal.
  Display the revised dictionary.
'''

creatures = {
  "cat": "meow",
  "dog": "bow-wow",
  "fish": "glug",
}


def changeValues(dicName, dicKey, dicValue):
  dicName[dicKey] = dicValue
  return dicName
  
print(changeValues(dicName = creatures, dicKey = "fish", dicValue = "gurg" ))
