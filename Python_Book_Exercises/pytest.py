'''
  A Test
'''

name = input('Enter a sentence\n')

sen_list = name.split()
sen_list.sort()
for words in sen_list:
    print(words)
