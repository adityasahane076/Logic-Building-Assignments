#3. Write a program which accept one number from user and return its factorial.
# Input : 5 Output : 120 
    
def Factorial(No):
    Fact = 1
    for i in range(1,No+1):
        Fact = Fact * i
        
    return Fact
        
def main():
    
    print("Enter Number :")
    Value = int(input())
    
    ret = Factorial(Value) 
    print(f"Factorial of {Value} is : {ret}")   
    
if __name__=="__main__":
    main()