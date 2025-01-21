index = 1
limit = 5000
a, b = 0, 1
for i in range(1, limit):
    if len(str(b)) == 1000:
        print(index)
        break
    index += 1
    c = a + b
    a = b
    b = c
