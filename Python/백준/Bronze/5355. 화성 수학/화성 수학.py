t = int(input())

lst = [[None for j in range(4)] for i in range(t)]
result = 0
for i in range(t):
  lst[i] = list(input().split())
  for j in range(1, len(lst[i])):
    if lst[i][j] == '@':
      lst[i][j] = float(lst[i][j-1])*3
    elif lst[i][j] == '%':
      lst[i][j] = float(lst[i][j-1])+5
    elif lst[i][j] == '#':
      lst[i][j] = float(lst[i][j-1])-7
  lst[i] = lst[i][len(lst[i])-1]

for i in lst:
  print(f'{i:.2f}', end='\n')