t = int(input())
result = []
for i in range(t):
  n = int(input())
  case = []
  for j in range(n):
    case.append(list(input().split()))
    M = int(case[0][1])
    name = case[0][0]
    for k in range(1, len(case)):
      if int(case[k][1]) > M:
        M = int(case[k][1])
        name = case[k][0]
  result.append(name)
for i in result:
  print(i)