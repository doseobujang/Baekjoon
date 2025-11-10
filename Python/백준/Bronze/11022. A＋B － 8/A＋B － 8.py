t = int(input())

case_list = []
process = []

for i in range(1, t+1):
  a, b = map(int, input().split())
  case_list.append(a+b)
  process.append(f'{a} + {b}')

for idx, val in enumerate(case_list):
  print(f'Case #{idx+1}: {process[idx]} = {val}')