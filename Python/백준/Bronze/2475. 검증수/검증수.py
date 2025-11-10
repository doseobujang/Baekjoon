lst = list(input().split())
s = 0
for i in lst:
  s+=(int(i)**2)
print(s%10)