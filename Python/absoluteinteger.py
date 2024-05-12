n=5
L=[6,2,5,6,6]

top=-1
sec=-1

for a in L:
    if a>top:
        sec=top
        top=a

if(sec==-1):
    secbig=0
    for a in L:
        if a<top and secbig<a:
            secbig=a
            
    sec=secbig
print(sec)