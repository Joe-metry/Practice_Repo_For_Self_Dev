'''
  Run this code. See that it displays hammock: 12

  Revise the function call to make rug: 144 display.

products = ["hammock", "basket", "lounge", "rug"]
qtys = [12, 48, 60, 144]
def show_level(first_list = products, second_list = qtys, first_index = 0, second_index = 0):
  product = first_list[first_index]
  qty = str(second_list[second_index])
  info_to_show = product + ": " + qty
  print (info_to_show)
show_level()

'''

products = ["hammock", "basket", "lounge", "rug"]
qtys = [12, 48, 60, 144]

def show_level(first_list = products, second_list = qtys, first_index = 0, second_index = 0):
  product = first_list[first_index]
  qty = str(second_list[second_index])

  info_to_show = product + ": " + qty
  print (info_to_show)

show_level(first_index = 3, second_index = 3)
