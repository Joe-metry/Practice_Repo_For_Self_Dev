'''
This is the first line of the potions.csv file on your Desktop:
Potion,Effect,Telltale Property. In IDLE code a
Python program that reads the potions.csv file
and converts it to a list finds the effect of "Draught of Peace"
and displays the effect.

'''
from csv import reader

def csv_Data():
    with open("potions.csv") as J:
        data_str = reader(J)
        csvDataList = []
        for j in data_str:
            csvDataList += j
        index_DOP = csvDataList.index("Draught of Peace")
        index_effect = index_DOP + 1

    return csvDataList[index_effect]

with open("potions.csv") as J:
    potionsData = reader(J)
    listForPotionData = []
    for every_line in potionsData:
        listForPotionData += every_line

print(listForPotionData)
