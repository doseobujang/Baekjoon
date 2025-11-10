result = []
while True:
  a, b = map(int, input().split())
  if a+b == 0:
    break
  else:
    result.append(a+b)
for i in result:
  print(i)