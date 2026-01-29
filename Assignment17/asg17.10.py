#10. Write a program which accept number from user and return addition of digits in that number.
# Input : 5187934 Output : 37 

    
def SumDigits(No):
    Sum = 0
    
    while No != 0:
        Digit = No % 10
        No = No // 10
        Sum = Sum + Digit
        
    return Sum
        
def main():
    
    print("Enter Number :")
    Value = int(input())
    
    ret = SumDigits(Value) 
    print(f"Sum of Digits in {Value} is : {ret}")   
    
if __name__=="__main__":
    main()