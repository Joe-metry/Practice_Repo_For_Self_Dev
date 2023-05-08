'''
Delete the first inner dictionary.
Change Jill Somers' last name to Barns
Display the customers dictionary.
'''

customers = {
   0: {
        "first name":"John",
        "last name": "Ogden",
        "address": "301 Arbor Rd.",
   },
   1: {
       "first name":"Ann",
       "last name": "Sattermyer",
       "address": "PO Box 1145",
   },
   2: {
     "first name":"Jill",
     "last name": "Somers",
     "address": "3 Main St.",
   },
}

del customers[0]
customers[2]["last name"] = 'Barns'

print(customers)
