You have to define a function before you can call it.
But it'll be easier if you leave room at the top for
the function definition and code the function call first.
Then you can go back to the top and code the function.
On line 9 call the function, passing the variables
sales_total and tax_rate as arguments.
Code the function. It calculates the tax on a sales
total and displays a message.
The function's two parameters are the total and the tax rate.
Calculate the tax by multiplying the two parameters.
Convert the result of the multiplication to a string.
Display the concatenation of "The tax is " and the tax string

  '''

def taxOnSales(sales_total, tax_rate):
  tax = str(sales_total * tax_rate)
  print("The tax is " + tax + ".")


sales_total = 100
tax_rate = .03
# Start by coding the function call on line 9.
taxOnSales(sales_total, tax_rate)
