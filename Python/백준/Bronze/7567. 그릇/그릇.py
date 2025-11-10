lst = list(input())

h = 10
for idx, val in enumerate(lst):
    if idx > 0 and idx < len(lst):
      if val != lst[idx-1]:
        h+=10
      else:
        h+=5
print(h)