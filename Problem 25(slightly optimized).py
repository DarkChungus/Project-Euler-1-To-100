import math
def no_digits(n):
    return math.floor(math.log10(n))+1
a, b, c, counter = 0, 1, 1, 1
for i in range(1, 10000):
    a = b
    b = c
    c = a + b
    counter += 1
    if no_digits(b)==1000:
        break
print(counter)
