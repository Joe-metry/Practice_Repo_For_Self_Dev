
'''
This is a proper modification of the the
Team search program, the first one has a
bug that has been fixed with this version
of the program.
The bug was the use of the tittle method
on a variable only inside of the if sta-
tement making it inaccessable by the 
else block. This program corrects all of
that.
'''

inputTN = ""
while True:
  inputTN = input('Enter team name you wish to search or enter q quit\n\n')
  if inputTN.lower() == 'q':
    print('Search terminated by you, you entered q or Q for quit')
    break
  teams = {'manchester united', 'liverpool', 'rsenal', 'chelsea', 'anchester city', 'totenham', 'newcastle'}

  inputTNU = inputTN.title() # This was only inside the if block and was the cause of the bug.
  if inputTN.lower() in teams:
    print(f"{inputTNU} is a team in the Premier league top six.")
    print('\n')
  else:
    print(f'The team you entered {inputTNU} is not a team in the premier league top six.')
