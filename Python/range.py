def sum_range(start: int, end: int) -> int:
    """
    """
    a=0
    for i in range(start,end):
        a = a+i
    
    return a

def sum_evens(start: int, end: int) -> int:
    """
    """
    a = 0
    for i in range(start,end):
        if i%2==0:
            a = a+i

    return a

