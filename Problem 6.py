sum_of_sq = 0
sum_first_hundred = 50*101 # Formula for sum up to 'n' terms: n(n+1)/2

for i in range(1, 101):
    sum_of_sq += i**2

sq_of_sum = sum_first_hundred ** 2

print(abs(sum_of_sq - sq_of_sum))

# Another brute force program
# But you dont really have to worry about brute force when the numbers are this small
# Output: 25164150
