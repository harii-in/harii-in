#1065
n = map(int, input().split())
for i in n:
    if(i % 2 == 0):
        print(i)

#1066
n = map(int, input().split())
for i in n:
    if(i % 2 == 0):
        print("even")
    else:
        print("odd")

#1067
n = int(input())
if(n > 0):
    print("plus")
elif(n < 0):
    print("minus")
if(n % 2 ==0):
    print("even")
else:
    print("odd")

#1068
score = int(input())
if(90<=score and score<=100):
    print("A")
elif(70<=score and score<90):
    print("B")
elif(40<=score and score<70):
    print("C")
else:
    print("D")

#1069
score = input()
if(score == 'A'):
    print("best!!!")
elif(score == 'B'):
    print("good!!")
elif(score == 'C'):
    print("run!")
elif(score == 'D'):
    print("slowly~")
else:
    print("what?")

#1070
month = int(input())
if(month == 12 or month == 1 or month == 2):
    print("winter")
elif(month == 3 or month ==4 or month == 5):
    print("spring")
elif(month == 6 or month == 7 or month == 8):
    print("summer")
elif(month == 9 or month == 10 or month == 11):
    print("fall")