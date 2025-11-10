rect = [[0 for i in range(2)] for i in range(3)]
for i in range(3):
    rect[i][0], rect[i][1] = map(int, input().split())
result = [0, 0]
for i in range(2):
    if rect[0][i] == rect[1][i]:
        result[i] = rect[2][i]
    elif rect[0][i] == rect[2][i]:
        result[i] = rect[1][i]
    else:
        result[i] = rect[0][i]
print(result[0], result[1])