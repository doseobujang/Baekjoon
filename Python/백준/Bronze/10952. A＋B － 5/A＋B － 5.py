result = []
while True:
  a, b = map(int, input().split())
  s = a+b
  if s == 0:
    break
  else:
    result.append(s)
for i in result:
  print(i)