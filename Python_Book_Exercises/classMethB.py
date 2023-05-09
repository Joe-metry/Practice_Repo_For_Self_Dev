'''
Code a class with one attribute and one method. The method displays the attribute.
Code an instance of the class.
Call the method.
'''

class Entertainment():
  def __init__(self, sports):
    self.sports = sports
    
  def active(self):
    print(self.sports)
     
entx = Entertainment("Football")
