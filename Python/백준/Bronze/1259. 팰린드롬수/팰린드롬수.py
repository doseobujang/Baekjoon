while True:
    n = list(input())
    if n[0]=='0':
        break
    else:
        check = 1
        for i in range(int(len(n)/2)):
            if n[i] != n[-(i+1)]:
                check = 0
        if check==1:
            print("yes")
        else:
            print("no")