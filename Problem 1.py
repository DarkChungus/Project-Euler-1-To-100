import time

def is_multiple(n):
    if n%3 == 0 or n%5 == 0:
        return True
    else:
        return False


s = 0

start = time.time()

for i in range(1, 1000):
    if is_multiple(i):
        s += i

end = time.time()
length = end - start

print(s)
print(f'It took {length} seconds.')

# This is a very easy problem. This is just the most obvious(and easiest) solution there is.
# Output: 233168
