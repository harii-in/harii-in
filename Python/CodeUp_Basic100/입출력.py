#1010
a = int(input())
print(a)

#1011
b = input()
print(b)

#1012
c = float(input())
print("%f" %c)

#1013
x, y = map(int, input().split())
print(x, y)

#1014
n, m = input().split()
print(m, n)

#1015
d = float(input())
print("%.2f" %d)

#1017
e = int(input())
print(e, e, e) #중간에 쉼표가 있는 경우, 띄어쓰기가 된다.

#1018
h, m = map(int, input().split(":"))
print("%d: %d" %(h, m))

#1019
y, m, d = map(int, input().split("."))
print("%04d.%02d.%02d" %(y, m, d))

#1020
first, last = input().split("-")
print(first+last)

#1021
word = input()
print(word)

#1022
line = input()
if(len(line)<2000):
    print(line)

#1023
n, m = input().split(".")
print(int(n))
print(int(m))

#1024
word_list = list(input())
for i in word_list:
    print("'%c'" %i)

word_list = input()
for i in word_list:
    print("'"+i+"'")

#1025
n = input()
print("[%d]" %(int(n[0]) * 10000))
print("[%d]" %(int(n[1]) * 1000))
print("[%d]" %(int(n[2]) * 100))
print("[%d]" %(int(n[3]) * 10))
print("[%d]" %(int(n[4])))

#1026
h, m, s = input().split(":")
print(int(m))

#1027
y, m, d = input().split(".")
print("%02d-%02d-%04d" %(int(d), int(m), int(y)))