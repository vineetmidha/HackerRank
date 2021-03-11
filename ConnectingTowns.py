
# https://www.hackerrank.com/challenges/connecting-towns/problem

def connectingTowns(n, routes):
    m = 1234567
    
    p = 1
    
    for i in routes:
        p = (p%m * i%m) % m
    
    return p
    
