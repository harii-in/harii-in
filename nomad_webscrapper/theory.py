'''
days = ["MON","TUE","WED","THUR","FRI"]
print(days)
print(type(days))
print("MON" in days)
print(days[3])
print(len(days))
print(len(days[2]))
days.append("SAT")
print(days)
days.reverse()
print(days)
'''

'''
days = ("Mon","Tue","Wed","Thur","Fri")
print(days)
print(type(days))
'''

'''
bong ={
	"name" : "BONG_U",
	"age" : 20,
	"korean" : True,
	"fav_food" : ["kinchi", "pizza"]
}
print(bong)
print(bong["name"])
bong["cute"]=True
print(bong)
'''

'''
age = "18"
print(age)
print(type(age))
n_age=int(age)
print(n_age)
print(type(n_age))
n2_age=float(age)
print(n2_age)
print(type(n2_age))
'''

'''
def say_hello(who):
  print("hello", who)

say_hello("bong_u")
say_hello(True)

def cal(a=0, b=0):
  print(a+b)
  print(a-b)
  print(a*b)
  print(a/b)
  print(a%b)

cal(5, 2)
'''

'''
def p_plus(a, b):
  print(a+b)

def r_plus(a, b):
  return a+b

p_result = p_plus(2,3)
r_result = r_plus(2,3)

print(p_result, r_result)
'''

'''
def say_hello(name, age):
  return f"Hello {name} you are {age} years old"

hello = say_hello("bong_u", "20")
print(hello)
hello = say_hello(age="20", name="harin")
print(hello)
'''

'''
def plus(a, b=0):
  return a+b

def minus(a, b=0):
  return a-b

def times(a, b=1):
  return a*b

def division(a, b=1):
  return a/b

def remainder(a, b=1):
  return a%b

def negation(a):
  return (a*(-1))

def power(a, b):
  return a**b


print("두 실수와 연산자를 입력하시오.: ")

a=input()
b=input()
operator=input()

a=float(a)
b=float(b)

if operator == '+':
  result = plus(a, b)
  print("%f + %f = %f" %(a, b, result))

if operator == '-':
  result = minus(a, b)
  print("%f - %f = %f" %(a, b, result))

if operator == '*':
  result = times(a, b)
  print("%f * %f = %f" %(a, b, result))

if operator == '/':
  result = division(a, b)
  print("%f / %f = %f" %(a, b, result))

if operator == '%':
  result = remainder(a, b)
  print("%f %% %f = %f" %(a, b, result))

if operator == "**":
  result = power(a, b)
  print("%f ** %f = %f" %(a, b, result))

print("negation을 원하십니까?(0,1): ")
check=input()
if check == '1':
  print("%f * (-1) = %f" %(result, negation(result)))
elif check =='0':
  print("%f" %result)

'''

'''
def age_check(age):
  print(f"you are {age}")
  if age<18:
    print("you cant drink")
  elif age==18:
    print("you are new to this!")
  elif age>20 and age<25:
    print("you are still kind of young")
  else:
    print("enjoy your drink")

age_check(17)
age_check(18)
age_check(19)
age_check(23)
'''

'''
days=("Mon", "Tue", "Wed", "Thu", "Fri")

for day in days:
  print(day)

for x in days:
  if x == "Wed":
    break
  else:
    print(x)

'''

'''
import math
print(math.ceil(1.2))
print(math.fabs(-1.2))

from math import ceil, fsum
print(ceil(1.2))
print(fsum([1,2,3,4,5,6,7]))
'''