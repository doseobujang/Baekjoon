n = int(input())
blank = 0
for i in range(n):
    for j in range(blank):
        print(" ", end="")
    for k in range(n-blank):
        print("*", end="")
    blank+=1
    print()