'''
Code a class with two attributes
Code two instances of the class
Display the first instance.
Display the second instance.
'''

class AssetClasses():
  def __init__(self, forex, indices):
    self.forex = forex
    self.indices = indices
    
firstAsset = AssetClasses("GBP/USD", "SP500")
secondAsset = AssetClasses("EUR/USD", "US30")

print(firstAsset)
