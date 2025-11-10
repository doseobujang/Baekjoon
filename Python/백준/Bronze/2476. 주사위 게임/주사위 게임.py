n = int(input())

prize = []
for i in range(n):
    a, b, c = map(int, input().split())
    
    if a==b and b==c:
        prize.append(10000+(a*1000))
    elif a==b or b==c:
        prize.append(1000+(b*100))
    elif c==a:
        prize.append(1000+(c*100))
    else:
        m = a if a > b else b
        m = c if c > m else m
        prize.append(m*100)

root = 0
for i in prize:
    if i > root:
        root = i
        
print(root)