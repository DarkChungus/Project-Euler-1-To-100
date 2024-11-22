def sieve(n): # Sieve of Eratosthenes, it's a really cool method to find out the primes. I wonder how the man came up with this that long ago.
    prime = [True] * (n + 1)
    prime[0] = prime[1] = False

    for p in range(2, int(n ** 0.5) + 1):
        if prime[p]:
            for i in range(p * p, n + 1, p):
                prime[i] = False

    return [p for p in range(2, n + 1) if prime[p]]

def nth_prime(n):
    # Calculate nth prime using sieve
    primes = sieve(200000) # Limit for sieve is big, just to make sure we get it.
    return primes[n-1]

n = 10001
print(nth_prime(n))

# Very optimized program, but this is what you have to do in project euler ¯\_(ツ)_/¯
# Output: 104743
