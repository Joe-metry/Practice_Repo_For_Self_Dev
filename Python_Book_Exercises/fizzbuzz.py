def fizzbuzz(N):
    J = []
    for n in range(1, N + 1):

        if N < 1:
            return
        if (n % 3 == 0) and (n % 5 == 0):
            J.append('fizzbuzz')
        elif n % 3 == 0:
            J.append('fizz')
        elif n % 5 == 0:
            J.append('buzz')
        else:
            J.append(str(n))
    return ', '.join(J)

print(fizzbuzz(60))
