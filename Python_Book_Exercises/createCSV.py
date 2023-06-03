'''
If you have aspreadsheet program like Excel that exports to CSV,
create a spreadsheet with at least three rows and three columns.
Export it to the Desktop as a CSV file.
Alternatively, create a CSV file in IDLE—three lines of three
comma-separated values each (no quotation marks, just text).
Name the file whatever you like, but end it in .csv.
Save it to the Desktop.
Revise the Python program you created in the previous set of
exercises to read and display a value in this CSV file.
Save the program and run it.
'''

Team,Year-found,League-titles
Manchester-Utd,1878,20
Liverpool,1892,19
Chelsea,1905,6

# The above is a CSV file saved with a dot csv extension

import csv

with open("csvprac.csv", "r") as J:
    readFile = csv.reader(J)

    csv_info_list = []
    for j in readFile:
        csv_info_list += j
    team_index = csv_info_list.index("Manchester-Utd")
    year_found = csv_info_list[team_index + 1]
    league_titles = csv_info_list[team_index + 2]
    print('\n')
    print(csv_info_list)
    print("\n")
    print("Manchester United was found in {}.".format(year_found))
    print("Manchester United has won {} league titles, and will win more!".format(league_titles))
