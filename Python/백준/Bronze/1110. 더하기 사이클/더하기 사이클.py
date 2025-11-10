N = int(input())
i = 0
M = -1
while M != N:
  if i!=0:
    a = M//10
    b = M%10
  else:
    a = N//10
    b = N%10
  M = 10*b + (a+b)%10
  i+=1
print(i)