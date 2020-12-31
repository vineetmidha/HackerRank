// https://www.hackerrank.com/challenges/jim-and-the-orders/problem

def jimOrders(orders):
    if len(orders) == 1:
        return [1]
    
    queue = []
    
    for i in range(len(orders)):
        queue.append([sum(orders[i]),i+1])

    queue.sort()

    return [i[1] for i in queue]
    
    
