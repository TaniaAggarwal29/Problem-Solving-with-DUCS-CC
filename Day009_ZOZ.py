# cook your dish here

'''
Input the array
Find the sum
Check the condition for each element of array
increment the count for each element for which the condition holds.
'''
for _ in range(int(input())):
    n, k = tuple(map(int, input().split()))
    a = tuple(map(int, input().split()))
    s = sum(a)
    
    count = 0
    for i in a:
        if i+k > s-i:
            count += 1
    print(count)