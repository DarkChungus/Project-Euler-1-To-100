import time


start = time.time()

a = 1
b = 2
c = 0
sum = 2

while c < 4000000:
    c = a + b

    if c % 2 == 0:
        sum = sum + c

    a = b
    b = c

end = time.time()
length = end - start

print(sum)
print(f'It took {length} seconds.')

# Very simple program again.
# Output: 4613732
