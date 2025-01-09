def generate_sequence(limit):
    result = "0."
    num = 1

    while len(result) <= limit + 2:
        result += str(num)
        num += 1

    return result[:limit + 2]


d1 = int(generate_sequence(1)[-1])
d10 = int(generate_sequence(10)[-1])
d100 = int(generate_sequence(100)[-1])
d1k = int(generate_sequence(1000)[-1])
d10k = int(generate_sequence(10000)[-1])
d100k = int(generate_sequence(100000)[-1])
d1m = int(generate_sequence(1000000)[-1])

print(d1 * d10 * d100 * d1k * d10k * d100k * d1m)
