# The below program will be improved upon

"""
This program calculates the Body Mass Index according to the
input values of one's weight and height either in Kg & meters
or pounds and inches.
BMI, or Body Mass Index, is a measure of body fat based on a
person's height and weight. While BMI is a useful tool for
assessing body weight, it's important to note that it's not a
perfect indicator of health.

A BMI between 18.5 and 24.9 is considered to be within the "normal"
or "healthy" range for most adults. However, this may not be appropriate
for everyone, as factors such as muscle mass and body composition can influence BMI.

It's important to keep in mind that BMI is just one tool that can
be used to assess overall health, and it's always best to consult
with a healthcare provider for personalized recommendations.
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
    print('Your Body Mass Index BMI is: {:.4f} kg/m^2'.format(BMI1))
elif WHunit == 2:
    print('Your Body Mass Index BMI is:', BMI2, 'kg/m^2')
