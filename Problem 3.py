import math
import time

def is_prime(n): # Optimized method to check if number is prime (sieve is still miles better, but oh well.)
    x = 1
    for i in range(1, int(math.sqrt(n))+1):
        if n%i == 0:
            x += 1

    if x == 2:
        return True
    else:
        return False


start = time.time() # Time start
ans = 0

num = 600851475143 # limit
for i in range(int(math.sqrt(num)) + 1, 1, -1):
    if num%i == 0 and is_prime(i):
        ans = i
        break

end = time.time()
length = end - start

print(ans)
print(f'It took {length} seconds.')

# Kind of optimized program, as I went backwards from the square root of the answer due to the nature of factors.
# Output: 6857
