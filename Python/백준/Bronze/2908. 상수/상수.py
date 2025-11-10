a, b = map(str, input().split())
a = list(a)
b = list(b)

n = int(a[2])*100 + int(a[1])*10 + int(a[0])
m = int(b[2])*100 + int(b[1])*10 + int(b[0])

if n>m:
    print(n)
else:
    print(m)