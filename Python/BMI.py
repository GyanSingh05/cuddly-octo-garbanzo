n=input('give me the number ')
array=[]
for i in range(int(n)):
    number = input("Give the number which is the " + str(i + 1) + "th: ")
    array.append(number)

for i in range(int(n)):
    print(array[i],end=' ')


