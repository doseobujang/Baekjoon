a, b, c = map(int, input().split())

d = [abs(a-b), abs(b-c), abs(c-a)]

max_d = 0
for i in d:
  if i > max_d:
    max_d = i

if max_d == abs(a-b):
  print(c)
elif max_d == abs(b-c):
  print(a)
elif max_d == abs(c-a):
  print(b)