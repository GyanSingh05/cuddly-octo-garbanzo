condition=1
x=0
a=0
while condition:
    number=input("input a number")
    if number=='':
        break
    x=x+1
    a=a+float(number)

print(a/x)
