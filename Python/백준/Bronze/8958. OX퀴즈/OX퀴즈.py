t = int(input())
result = []
for i in range(t):
  lst = list(input())
  s = 0
  sO = 0
  for i in range(len(lst)):
    if lst[i] == 'O':
      sO+=1
      s+=sO
    elif lst[i] == 'X':
      sO = 0
  result.append(s)
for i in result:
  print(i)