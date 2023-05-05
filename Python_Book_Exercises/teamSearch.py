'''
This program tells the user whether the team they entered is a Premier
League top 6 team or not.
'''

inputTN = ""
while inputTN != 'q' and inputTN != 'Q':
  inputTN = input('Enter team name you wish to search or enter q or Q to quit\n\n')
  if inputTN == 'q' or inputTN == 'Q':
    print('Search terminated by you, you entered q or Q for quit')
    break
  teams = ['Manchester united', 'Liverpool', 'Arsenal', 'Chelsea', 'Manchester city', 'Totenham', 'Newcastle']
  found = False
  for i in teams:
    if i == inputTN:
      print(f"{inputTN} is a team in the Premier league top six.")
      found = True
      print('\n')
      break
  if not found:
    print(f'The team you entered {inputTN} is not a team in the premier league top six.')
