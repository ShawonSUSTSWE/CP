# Python Program to find prime numbers in a range 
import math
import time


def is_prime(n):
    if n <= 1:
        return False
    if n == 2:
        return True
    if n > 2 and n % 2 == 0:
        return False

    max_div = math.floor(math.sqrt(n))
    for i in range(3, 1 + max_div, 2):
        if n % i == 0:
            return False
    return True


# Driver function
t0 = time.time()
c = 0  # for counting

for n in range(1, 100000000):
    x = is_prime(n)
    c += x
print("Total prime numbers in range :", c)

t1 = time.time()
print("Time required :", t1 - t0) 