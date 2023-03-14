"""
This program calculates the Body Mass Index according to the
input values of one's weight and height either in Kg & meters
or pounds and inches.
"""
PromptWeight = eval(input('Enter your weight: '))
PromtHieght = eval(input('Enter your height: '))

WHunit = eval(input('What unit is the weight and height entered?\n1 = Kilogram/meters\n2 = Pounds/inches\nUnit: '))

# BMI = weight (kg) / height^2 (m^2)
# BMI = (weight (lbs) / height^2 (in^2)) x 703
# Note that BMI is only an estimate of body fatness and is not
# a diagnostic tool for health or weight problems.
# It is best used in combination with other measures
# such as waist circumference, blood pressure, and blood lipid
# levels to assess overall health risk
# The unit of BMI (Body Mass Index) is kg/m^2 (kilograms per square meter).

BMI1 = (PromptWeight / (PromtHieght ** 2))
BMI2 = ((PromptWeight / (PromtHieght ** 2)) * 703)
if WHunit == 1:
    print('Your Body Mass Index BMI is:', BMI1, 'kg/m^2')
elif WHunit == 2:
    print('Your Body Mass Index BMI is:', BMI2, 'kg/m^2')
