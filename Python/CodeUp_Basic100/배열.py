#1차원 배열
'''
#1093
cnt = int(input())
arr = list(map(int, input().split()))
arr2 = [0]+23
for i in arr:
    arr2[i-1] += 1
for j in arr2:
    print(j, end=' ')

#1094
cnt = int(input())
arr = list(map(int, input().split()))
result = reversed(arr)
for i in result:
    print(i, end=' ')

#1095
cnt = int(input())
arr = list(map(int, input().split()))
min = sorted(arr)[0]
print(min)


#2차원 배열
#1096
n = int(input())
arr = [[0]*19 for i in range(19)]
for i in range(n):
    x, y = map(int, input().split())
    arr[x-1][y-1] = 1
for j in arr:
    print(j)

#1097
n = int(input())
arr = [0 for i in range(19) for j in range(19)]
for i in range(19):
    row = list(map(int, input().split()))
    for j in range(19):
        arr[i][j] = row[j]
for i in range(n):
    s, y = map(int, input().split())
    for j in range(19):
        if(arr[x-1][j])==1:
            arr[x-1][j]=0
        elif(arr[x-1][j]==0):
            arr[x-1][j]=1
    for j in range(19):
        if(arr[j][y-1])==1:
            arr[j][y-1]=0
        elif(arr[j][y-1]==0):
            arr[j][y-1]=1
for i in range(19):
    for j in range(19):
        print(arr[i][j], end=' ')
    print(end='\n')

#1098
a, b = map(int, input().split())
arr = [[0]*b for _ in range(a)] #언더스코어
n = int(input())
for i in range(n):
    l, d, x, y = map(int, input().split())
    for j in range(l):
        if(d==0):
            arr[x-1][y-1+j] = 1
        elif(d==1):
            arr[x-1+j][y-1] = 1
for i in range(a):
    for j in range(b):
        print(arr[i][j], end = ' ')
    print()
'''

#1099
arr = [[0]*10 for i in range(10)]
for i in range(10):
    arr[i] = list(map(int, input().split()))
x=y=1
while True:
    if(arr[x][y]==0):
        arr[x][y]=9
        if(x==8 and y==8):
            break
        y+=1
    elif(arr[x][y]==1):
        y-=1
        x+=1
    else:
        arr[x][y] = 9
        break
for i in range(10):
    for j in range(10):
        print(arr[i][j], end = ' ')
    print()