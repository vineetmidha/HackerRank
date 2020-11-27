// https://www.hackerrank.com/challenges/fair-rations/problem

def fairRations(a):
    c = 0
    
    for i in range(0, len(a)-1):
        if a[i] % 2:
            a[i] = 0
            a[i+1] = 1
            c += 2
    
    return "NO" if a[-1] % 2 else c

'''

Sample Input 0

5
2 3 4 5 6

Sample Output 0

4

Sample Input 1

2
1 2

Sample Output 1

NO
'''
