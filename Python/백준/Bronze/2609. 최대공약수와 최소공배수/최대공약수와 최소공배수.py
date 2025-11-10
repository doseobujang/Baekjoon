a, b = map(int, input().split())
s = a*b
while b != 0:
  r = a%b
  a = b
  b = r
print(a)
print(s//a)