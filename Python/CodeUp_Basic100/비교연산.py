#1049
n, m = map(int, input().split())
if(n > m):
    print(1)
else:
    print(0)

#1050
n, m = map(int, input().split())
if(n==m):
    print(1)
else:
    print(0)

#1051
n, m = map(int, input().split())
if(n <= m):
    print(1)
else:
    print(0)

#1052
n, m = map(int, input().split())
if(n != m):
    print(1)
else:
    print(0)


#삼항연산

#1063
n, m = map(int, input().split())
print(n if n > m else m)

#1064
a, b, c = map(int, input().split())
min = (a if a < b else b)
print(min if min < c else c)