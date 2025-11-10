n = int(input())
isGroup = True
result = 0
for i in range(n):
  c = list(input())
  for j in range(1, len(c)):
    if c[j] == c[j-1]:
      c[j-1] = None
  c = list(filter(None, c))
  
  if len(c) == 1:
    result+=1
  else:
    for j in range(len(c)-1):
      for k in range(j+1, len(c)):
        if c[j] == c[k]:
          isGroup = False
          break
    if isGroup == True:
      result+=1
    else:
      isGroup = True
print(result)