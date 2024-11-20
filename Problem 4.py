import time

def is_palindrome(n):
    if str(n)[::-1] == str(n):
        return True
    else:
        return False


s = 0

start = time.time()

for i in range(999, 100, -1):
    for j in range(999, 100, -1):
        if is_palindrome(i*j):
            if (i*j) > s:
                s = i * j

end = time.time()
length = end - start

print(s)
print(f'It took {length} seconds.')

# Not very optimized, it could very much be faster, but this is just what instantly came into my head, and hey, a second is better than a minute.
# Output: 906609
