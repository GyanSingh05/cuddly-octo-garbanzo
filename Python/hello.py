import time

org = "hello world"
main = " "
user = None

for i in range(11):
    if i == 5:
        main += ' '
        continue
    for j in range(97, 123):
        time.sleep(1)
        user = chr(j)
        main += user
        print(main)
        if user == org[i]:
            break
    main = main[:-1]  # Remove the last character added