#1071
list = input().split()
for i in list:
    if(int(i) == 0):
        break
    print(i)

#1072
n = int(input())
list = map(int, input().split())
for i in list:
    print(i)

#1073
list = map(int, input().split())
for i in list:
    if(i == 0):
        break
    else:
        print(i)

list = input().split()
for i in list:
    if(i == '0'):
        break
    else:
        print(i)

#1074
n = int(input())
while(n >= 1):
    print(n)
    n -= 1

#1075
n = int(input())
while(n >= 1):
    print(n - 1)
    n -= 1

#1076
last = ord(input())
first = ord('a')
while(first <= last):
    print(chr(first), end = ' ') #파이썬 한 줄로 출력하는 방법.
    first += 1

#1077
n = int(input())
i = int(0)
while(i <= n):
    print(i)
    i += 1
