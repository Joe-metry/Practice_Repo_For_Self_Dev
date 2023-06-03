'''
    This project is a modification of the Team search 
    rogram in this repository.
'''


inputTN = ""
while True:
  inputTN = input('Enter team name you wish to search or enter q or Q to quit\n\n')
  if inputTN.lower() == 'q':
    print('Search terminated by you, you entered q or Q for quit')
    break
  teams = {'manchester united', 'liverpool', 'rsenal', 'chelsea', 'anchester city', 'totenham', 'newcastle'}

  if inputTN.lower() in teams:
    inputTNU = inputTN.title()
    print(f"{inputTNU} is a team in the Premier league top six.")
    print('\n')
    break
  else:
    print(f'The team you entered {inputTNU} is not a team in the premier league top six.')
