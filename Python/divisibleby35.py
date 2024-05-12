condition=1
def div_3_5(start:int,end:int) -> int:
    num1=0
    st=start
    
    while condition:
        if st==end:
            break
        if st%3==0 or st%5==0:
            num1=num1+1
        st=st+1
    print(num1)
    return num1


