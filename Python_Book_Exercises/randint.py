import random
x = [1, 2, 3, 4, 5, 6, 7, 8]
for j in x:

    u = random.randint(1, len(x))
    if j == u:
        print(f'{u} = {j} is the num')
    x.remove(j)
print(x)
