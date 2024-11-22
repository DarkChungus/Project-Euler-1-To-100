import time


start = time.time() # Time start

a = 1
b = 2
c = 0
sum = 2

while c < 4000000: # Limit

    # Code to generate fibonacci sequence
    
    c = a + b

    if c % 2 == 0:
        sum = sum + c

    a = b
    b = c

end = time.time() # Time stop
length = end - start

print(sum)
print(f'It took {length} seconds.')

# Very simple program again.
# Output: 4613732
