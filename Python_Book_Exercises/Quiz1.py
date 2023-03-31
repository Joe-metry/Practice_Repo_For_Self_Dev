"""
This program gives out three questions
for the user to answer in form of a quick
quiz. If user answers right the user gets
awarded some scores.
"""

Questions = ['Who is Betty?', 'Is Python dope?', 'How many pluses does C++ have?']
Answers = ['bot', 'yes', 'two']
count = 0
for q in range(len(Questions)):
    A = input(Questions[q])
    if Answers[q] == A.lower():
        print('Great!!!')
        count += 1
    else:
        print('Braze up for the next question you dumbo!')
print(f'Your total score is {count}/3 thanks for playing!')
