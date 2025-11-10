n = int(input())

cute = 0
nonCute = 0

for i in range(n):
  a = int(input())
  if a == 0:
    nonCute+=1
  elif a == 1:
    cute+=1

if cute > nonCute:
  print('Junhee is cute!')
else:
  print('Junhee is not cute!')