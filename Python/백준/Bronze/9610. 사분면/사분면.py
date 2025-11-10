n = int(input())
lst = [0 for i in range(n)]
for i in range(n):
  x, y = map(int, input().split())
  if x > 0 and y > 0:
    lst[0]+=1
  elif x < 0 and y > 0:
    lst[1]+=1
  elif x < 0 and y < 0:
    lst[2]+=1
  elif x > 0 and y < 0:
    lst[3]+=1
  else:
    lst[4]+=1
for i in range(4):
  print(f'Q{i+1}:', lst[i])
print('AXIS:', lst[4])