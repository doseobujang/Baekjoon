V = int(input())
who = list(input())

A = 0
B = 0

for i in who:
  if i == 'A':
    A+=1
  elif i == 'B':
    B+=1

if A > B:
  print('A')
elif A < B:
  print('B')
else:
  print('Tie')