'''
Code a class with two attributes and one method. 
The attributes are integers. The method compares
the first value with the second value.
If the first value is greater than the second value,
display a message.
Code an instance of the class. Make the value of the
first attribute greater than the value of the second
attribute. Call the method.
'''

class Amounts():
  def __init__(self, engrXPay, designerYPay):
    self.engrXPay = engrXPay
    self.designerYPay = designerYPay
    
  def comparePay(self):
    if self.engrXPay > self.designerYPay:
      diff = self.engrXPay - self.designerYPay
      print(f"Engineer's {self.engrXPay} pay is {diff} higher than the designer's package in dollars.")

paySize = Amounts(120000, 80000)
paySize.comparePay()
entx.active()
