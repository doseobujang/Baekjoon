import math
a, b, v = map(int, input().split())
s = (v-b)/(a-b)
print(math.ceil(s))