# cook your dish here
for i in range(int(input())):
    n = input().strip()
    count = 0
    '''If number contains any digit not equal to 4 or 7, it is not lucky number.
	   Replace it to make the number lucky
	   That would count as 1 operation, therefore increment the count'''
    for j in n:
        if j!='4' and j!='7':
            count += 1
    print(count)
            