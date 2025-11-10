t = int(input())
result = []
for i in range(t):
  Sa, Sb = 0, 0
  for j in range(9):
    a, b = map(int, input().split())
    Sa+=a
    Sb+=b
  if Sa == Sb:
    result.append('Draw')
  else:
    result.append('Yonsei' if Sa > Sb else 'Korea')
for i in result:
  print(i)