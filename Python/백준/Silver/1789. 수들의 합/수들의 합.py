s = int(input())

i = 2
s_prime = s
while s_prime > 0:
  s_prime-=i
  i+=1

print(i-2)