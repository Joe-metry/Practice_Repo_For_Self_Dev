"""
In this program In will be using the approximate solution just learnt to
estimate the cube root of a given number.

From what I have learnt so far, the algorithm requires
the following key parameters to make the approximation
easy and effective.
They include:

i. The increment &
ii. The epsilon (which is the set number used for comparison).

And the smaller the value, the more accurate the approximation.
The increment is also a chosen value that acts in a similar but
slightly different way from the epsilon, it is a very small
chosen number used as an incrementing value throughout the
iteration until we attain a good enough value.

The smaller the increment and epsilon values the more accurate
our approximation but slower our program, whereas the bigger
these two value the faster but inaccurate our program and
estimation/approximation.

"""

num = eval(input("Enter number: "))
increment = .0001
epsilon = .001
appr = 0
iter_times = 0
while abs((appr ** 3 - num)) >= epsilon and appr <= num:
    appr += increment
    iter_times += 1

print('It took me', iter_times, 'to arrive at this result.')
if appr >= epsilon:
    print('couldn\'t find the cube of', num)
else:
    print(appr, 'is the approximate value of', num, 'cubed')
