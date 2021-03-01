# cook your dish here
for _ in range(int(input())):
    word = input()
    load = 1
    prints = len(word)
    increment = 0
    for i in range(1, len(word)):
        if ord(word[i]) > ord(word[i-1]):
            increment = increment + (ord(word[i]) - ord(word[i-1]))
        elif ord(word[i]) < ord(word[i-1]):
            increment = increment + (26 - ord(word[i-1]) + ord(word[i]))
    
    if (load+prints+increment <= 11*len(word)):
        print("YES")
    else:
        print("NO")