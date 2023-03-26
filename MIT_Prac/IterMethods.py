""""
 In this program I will be practising the iteration
 of the loop variable over the elements or objects
 and also the iteration of the loop variable over
 the indices of the data.
 That is using the:
 for i in Given_data:
 and the:
 for j in range(len(Given_data)):

 the above instances producing the same results.
 The first one is said to be more pythonic, while
 the last is said to be used when we want to keep
 track of the loop variable.
"""
total = 0
L = [4,6,7,8,9,3,91]
for j in L:
    total += j
    print(total)
print('\n\n')
M = [9,4,7,8,4,3,10,91]
total1 = 0
for i in range(len(M)):
    total1 += M[i]
    print(total1)
