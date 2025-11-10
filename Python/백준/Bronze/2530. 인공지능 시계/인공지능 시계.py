a, b, c = map(int, input().split())
d = int(input())

time = [a, b, c]

for i in range(len(time)):
  s = 60**(3-i-1)
  e = d//s
  if e > 0:
    time[i]+=e
    d-=(s*e)

for i in range((len(time))):
    if 2-i > 0 and time[2-i] >= 60:
      time[2-i-1]+=(time[2-i]//60)
      time[2-i]-=60*(time[2-i]//60)
  
    if time[0] >= 24:
      time[0]-=24*(time[0]//24)

print(time[0], time[1],  time[2])