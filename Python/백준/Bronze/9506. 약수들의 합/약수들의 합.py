n = 0
result = []
while True:
  n = int(input())
  if n == -1:
    break
  else: 
    save_n = n
    measure = []
    for i in range(1, n//2+1):
      if n%i == 0:
        measure.append(i)
        save_n-=i
    if save_n != 0:
      result.append(f'{n} is NOT perfect.')
    else:
      sentence = f'{n} = {measure[0]}'
      for i in range(1, len(measure)):
        sentence+= f' + {measure[i]}'
      result.append(sentence)

for i in result:
  print(i)