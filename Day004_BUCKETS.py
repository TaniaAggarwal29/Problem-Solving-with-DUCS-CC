# cook your dish here
def main():
    n, k = tuple(map(int, input().split()))
    a = [list(map(int, input().split())) for _ in range(n)]
    
    p = [a[0][i]/sum(a[0]) for i in range(k)]   # probbaility of moving from bucket 1
    
    for i in range(1, n):
        # finding probability of moving from buckets 1 to n-1
        '''
        i-th bucket contains sum(a[i])+1 balls when one ball has been moved from (i-1)th bucket.

        probability of j-th color is:
        (probability of moving j from previous bucket)*(probability of selecting j from current bucket)
        + (probability of not moving j-th color from previous bucket)*(probability of selecting j from current bucket)
        '''
        s = sum(a[i])+1
        p = [(p[j]*(a[i][j]+1) + (1-p[j])*(a[i][j]))/s for j in range(k)]
        
    for i in range(k):
        print(round(p[i], 6), end=" ")
    
if __name__ == '__main__':
    main()