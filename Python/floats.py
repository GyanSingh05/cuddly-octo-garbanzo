number_of_floats = int(input('Please enter the number of floats: '))
num=number_of_floats
count=0
while num>0:
    count=count+float(input("give me the next number"))
    num=num-1

print(count/number_of_floats)