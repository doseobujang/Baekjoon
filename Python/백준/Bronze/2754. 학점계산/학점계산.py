s = list(input())
if s[0] == 'F':
    print(0.0)
else:
    r = 69.3-float(ord(s[0]))
    if s[1]=='0':
        r-=0.3
    elif s[1]=='-':
        r-=0.6
    print(f'{r:.1f}')