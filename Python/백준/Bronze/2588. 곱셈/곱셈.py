a = int(input())
b = str(input())

lst = []

for i in reversed(list(b)):
  lst.append(a*int(i))

lst.append(a*int(b))

for i in lst:
  print(i)