#9. Write a program which accept number from user and return number of digits in that number.
# Input : 5187934 Output : 7 
    
def CountDigit(No):
    Cnt = 0
    
    while No != 0:
        No = No // 10
        Cnt = Cnt + 1
        
    return Cnt
        
def main():
    
    print("Enter Number :")
    Value = int(input())
    
    ret = CountDigit(Value) 
    print(f"Numbers of Digits in {Value} are : {ret}")   
    
if __name__=="__main__":
    main()