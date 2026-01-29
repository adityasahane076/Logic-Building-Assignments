# 1.Create on module named as Arithmetic which contains 4 functions as Add() for addition, Sub()
# for subtraction, Mult() for multiplication and Div() for division. All functions accepts two
# parameters as number and perform the operation. Write on python program which call all the
# functions from Arithmetic module by accepting the parameters from user. 


import Arithmetic

print("Enter first Number :")
Value1 = int(input())

print("Enter second Number :")
Value2 = int(input())

aRet = Arithmetic.Addition(Value1,Value2)
print("Addition is : ",aRet)

sRet = Arithmetic.Substract(Value1,Value2)
print("Substraction is : ",sRet)

mRet = Arithmetic.Multiply(Value1,Value2)
print("Multiplication is : ",mRet)

dRet = Arithmetic.Divide(Value1,Value2)
print("Division is : ",dRet)

