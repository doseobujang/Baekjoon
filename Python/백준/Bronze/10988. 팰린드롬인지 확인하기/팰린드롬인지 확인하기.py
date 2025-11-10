c = list(input())

b = True

for i in range(0, len(c)//2):
  if c[i] != c[-i-1]:
    b = False
    break

if b == False:
  print(0)
else:
  print(1)