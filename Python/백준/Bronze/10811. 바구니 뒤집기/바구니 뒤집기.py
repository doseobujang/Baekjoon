n, m = map(int, input().split())
lst = [i for i in range(1, n+1)]
for k in range(m):
    i, j = map(int, input().split())
    i-=1
    j-=1
    for l in range(int((j-i+1)/2)):
        check = lst[i+l]
        lst[i+l] = lst[j-l]
        lst[j-l] = check
for i in lst:
    print(i, end=" ")