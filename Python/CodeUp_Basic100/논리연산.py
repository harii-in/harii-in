#1053
n = int(input())
if(n == 1):
    print(0)
elif (n==0):
    print(1)

#1054
n, m = map(int, input().split())
if(n==1 and m==1):
    print(1)
else:
    print(0)

#1055
n, m = map(int, input().split())
if(n==1 or m==1):
    print(1)
else:
    print(0)

#1056
n, m = map(int, input().split())
if(n != m):
    print(1)
else:
    print(0)

#1057
n, m = map(int, input().split())
if(n == m):
    print(1)
else:
    print(0)

#1058
n, m = map(int, input().split())
if(n==0 and m==0):
    print(1)
else:
    print(0)