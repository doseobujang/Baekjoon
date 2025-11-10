t = int(input())

result = []
for i in range(t):
    a, b = map(int, input().split())
    if a < b:
        save = a
        a = b
        b = save
    n = a*b
    while b != 0:
        r = a%b
        a=b
        b=r
    result.append(n//a)
    
for i in result:
    print(i, end='\n')