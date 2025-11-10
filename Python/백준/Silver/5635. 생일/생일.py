n = int(input())
lst = []
result = []
maxP, minP = ['', 0, 0, 1989], ['', 32, 13, 2011]
for i in range(n):
  lst.append(list(input().split()))
  for j in range(1, 4):
    lst[i][j] = int(lst[i][j])
  
  if (lst[i][3] > maxP[3]) or (lst[i][3] == maxP[3] and lst[i][2] > maxP[2]) or (lst[i][3] == maxP[3] and lst[i][2] == maxP[2] and lst[i][1] > maxP[1]):
    maxP = lst[i]
  if (lst[i][3] < minP[3]) or (lst[i][3] == minP[3] and lst[i][2] < minP[2]) or (lst[i][3] == minP[3] and lst[i][2] == minP[2] and lst[i][1] < minP[1]):
    minP = lst[i]
print(maxP[0])
print(minP[0])