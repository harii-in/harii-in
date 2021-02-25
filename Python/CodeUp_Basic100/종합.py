#1078
n = int(input())
i = 0
sum = 0
for i in range(1, n+1):
    if(i % 2 ==0):
        sum += i
print(sum)

#1079
while(true):
    word = input()
    print(word)
    if(word == 'q'):
        break

list = input().split()
for i in list:
    print(i)
    if(i == 'q'):
        break

#1080
n = int(input())
sum = 0
for i in range(1, 1000):
    sum += i
    if(sum >= n):
        print(i)
        break

n = int(input())
sum = 0
i = 0
while(sum <= n):
    i += 1
    sum += i
print(i)

#1081
n, m = map(int, input().split())
for i in range(1, n+1):
    for j in range(1, m+1):
        print(i, j)

#1082
n = int(input(), 16)
for i in range(1, 16):
    print(("%X" %n)+'*'+("%X" %i)+'='+('%X' %(n*i)))

#1083
n = int(input())
for i in range(1, n+1):
    if(i%3==0):
        print('x', end=' ')
    else:
        print(i, end=' ')

#1084
r, g, b = map(int, input().split())
cnt = 0

for i in range(0, r):
    for j in range(0, g):
        for k in range(0, b):
            cnt += 1
            print(i, j, k)
print(cnt)

#1085
h, b, c, s = map(int, input().split())
print("%.1f MB" %(h*b*c*s/8/1024/1024))

#1086
w, h, b = map(int, input().split())
print("%.2f MB" %(w*h*b/8/1024/1024))

#1087
n = int(input())
sum =0
for i in range(1, ):
    sum += i
    if(sum >= n):
        print(sum)
        break

#1088
n = int(input())
for i in range(1, n+1):
    if(i % 3 == 0):
        continue
    print(i)

#1089
a, d, n = map(int, input().split())
print(a+d*(n-1))

#1090
a, r, n = map(int, input().split())
print(a*pow(r, n-1))

#1091
a, m, d, n = map(int, input().split())
result = a*m+d
if(n == 1):
    print(a)
else:
    for i in range(2, n):
            result = result*m+d
        print(result)

#1092
a, b, c = map(int, input().split())
day = 1
while(day % a != 0 and day % b != 0 and day % c != 0):
    day+=1
print(day) 