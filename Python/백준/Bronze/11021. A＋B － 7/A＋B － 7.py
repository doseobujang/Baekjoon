t = int(input())

case_list = []

for i in range(1, t+1):
  a, b = map(int, input().split())
  case_list.append(a+b)

for idx, val in enumerate(case_list):
  print(f'Case #{idx+1}: {val}')