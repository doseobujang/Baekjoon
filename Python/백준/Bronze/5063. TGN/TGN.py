N = int(input())

result = []
for i in range(N):
  r, e, c = map(int, input().split())
  if e - c > r:
    result.append('advertise')
  elif e - c < r:
    result.append('do not advertise')
  elif e - c == r:
    result.append('does not matter')

for i in result:
  print(i, end='\n')