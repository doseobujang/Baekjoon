exp = list(input())
num, opt = [], []
num_str = ''
isMinus = False

for i in exp:
  if i != '+' and i != '-':
    num_str+=i
  elif i == '+' or i == '-':
    num.append(int(num_str))
    num_str = ''
    if isMinus == True:
      opt.append('-')
    else:
      if i == '-':
        isMinus = True
        opt.append('-')
      else:
        opt.append('+')
num.append(int(num_str))

sum = num[0]
for i, val in enumerate(opt):
  if val == '-':
    sum-=num[i+1]
  else:
    sum+=num[i+1]
print(sum)