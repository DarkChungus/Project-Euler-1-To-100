import time

def is_multiple(n): # Function for checking if it is a multiple.
    if n%3 == 0 or n%5 == 0:
        return True
    else:
        return False


s = 0

start = time.time() # Time start

for i in range(1, 1000): # The limit for the problem
    if is_multiple(i):
        s += i

end = time.time() # Time end
length = end - start

print(s)
print(f'It took {length} seconds.')

# This is a very easy problem. This is just the most obvious(and easiest) solution there is.
# Output: 233168
