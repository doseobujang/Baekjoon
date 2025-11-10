n, x = map(int, input().split())
lst = list(map(int, input().split()))
result = []
for i in lst:
  if i < x:
    result.append(i)
for i in result:
  print(i, end=' ')