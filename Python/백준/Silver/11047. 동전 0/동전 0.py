n, k = map(int, input().split())
coin = []
for i in range(n):
  coin.append(int(input()))

n = 0
for i in reversed(coin):
  n += k//i
  k%=i
print(n)