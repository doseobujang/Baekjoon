n = int(input())

result = []
n_prime = n
for i in range(2, n+1):
  while n_prime%i==0:
    n_prime = n_prime//i
    result.append(i)

for i in result:
  print(i, end='\n')