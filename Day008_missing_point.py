# cook your dish here
for _ in range(int(input())):
    n = int(input())
    cx = []
    cy = []

    # store all the x-coordinates in one list
    # and all the y-coordinates in another
    for i in range(4*n-1):
        x, y = tuple(map(int, input().split()))
        cx.append(x)
        cy.append(y)
    
    # sort both the lists
    cx.sort()
    cy.sort()
    
    # check for the pairs. If any element doesn't have its pair, then that's the answer
    for i in range(1, 4*n-1, 2):
        if cx[i-1] != cx[i]:
            x=cx[i-1]
            break
    
    for i in range(1, 4*n-1, 2):
        if cy[i-1] != cy[i]:
            y=cy[i-1]
            break
        
    print(x, y)
    