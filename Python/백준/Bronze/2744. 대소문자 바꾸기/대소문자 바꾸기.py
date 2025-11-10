c = list(input())
result = ''
for idx, val in enumerate(c):
  if ord(val) >= 65 and ord(val) <= 90:
    result+=chr(ord(c[idx])+32)
  else:
    result+=chr(ord(c[idx])-32)
print(result)