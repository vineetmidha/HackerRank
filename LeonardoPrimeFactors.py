# https://www.hackerrank.com/challenges/leonardo-and-prime/problem

primes = [0, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53]
primorials = [] # product of primes

p = 1

for i in primes:
    p *= i
    primorials.append(p)

def primeCount(n):
    if n==1: return 0
    
    p = 1
    
    ans = 0
    
    for i in range(len(primorials)):
        if primorials[i] > n:
            return i
        elif p == n:
            return i+1
