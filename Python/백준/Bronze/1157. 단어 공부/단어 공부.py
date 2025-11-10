lst = list(input().upper())
result = [0 for i in range(27)]
for i in lst:
  result[ord(i)-65]+=1

M = 0
idx = 0
exLst = [i for i in result]
exLst.sort(reverse=True)

if exLst[0] == exLst[1]:
  print('?')
else:
  for i in range(len(result)):
    if result[i] != 0:
      if result[i] > M:
        M = result[i]
        idx = i
  print(chr(idx+65))