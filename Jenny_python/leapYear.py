"""
Here I will be writting a program that tells if a year
is a leap year or not.
This program prompts the user to enter a year of their
choice and explicitely tells them whether the given
year is a leap year or not.
"""

year = eval(input('Enter Year: '))
if year % 4 == 0:
    if year % 100 == 0:
        if year % 400 == 0:
            print(f'The year {year} is a leap year')
        else:
            print(f'This year {year} is not a leap year')
    else:
        print(f'This year {year} is a leap year')
else:
    print(f'The year {year} is not a leap year')
