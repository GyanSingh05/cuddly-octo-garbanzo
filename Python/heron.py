def heron(a:float,b:float,c:float)->float:
    """
    this heron's function return arean of a trianble
    with sides a,b,c


    type contract
    preconditions:
    a,b and c must be greater than 0 at all times
    """
    s = (a+b+c)/2
    return (s*(s-a)*(s-b)*(s-c))**0.5