# Ask the user for a temperature. Then ask them what units, Celsius or Fahrenheit, the temperature is in.
# Your program should convert the temperature to the other unit. The conversions are:
# F = (9/5)C + 32 and C = 5/9(F - 32).

Temp = eval(input("Enter Temperature to be converted\n: "))
Askunit = print("What unit is the temperature entered?\n1 = Celcius.\n2 = Fahrenheit: ")
unit = eval(input())

Fah = round(((9/5) * Temp) + 32, 2)
Cel = round((5/9) * (Temp - 32), 2)

if unit == 1:
    print("{}"" " "degree celsius is:"" " "{}"" " "in Fahrenheit.".format(Temp, Fah))
elif unit == 2:
    print("{}"" " "degree Fahrenheit is:"" " "{}" " ""in Celsius.".format(Temp, Cel))
else:
    print("You have entered an invalid temperature unit,\nrerun program and select 1 or 2.")
