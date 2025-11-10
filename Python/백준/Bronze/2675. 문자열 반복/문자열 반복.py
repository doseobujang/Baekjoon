t = int(input())

case = [[None for j in range(2)] for i in range(t)]
char_lst = [None for i in range(t)]
result_lst = ['' for i in range(t)]

for i in range(t):
  case[i] = list(input().split())
  char_lst[i] = list(case[i][1])

  for val in char_lst[i]:
    result_lst[i]+=(val*int(case[i][0]))

for val in result_lst:
  print(val, end='\n')