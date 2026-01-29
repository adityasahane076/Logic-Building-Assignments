#4.Write a program which accept one number form user and return addition of its factors.
# Input : 12 Output : 16 (1+2+3+4+6)
    
def SumFactor(No):
    Sum = 0
    for i in range(1,No):
        if No % i == 0:
            Sum = Sum + i
        
    return Sum
        
def main():
    
    print("Enter Number :")
    Value = int(input())
    
    ret = SumFactor(Value) 
    print(f"Sum  of factors is {Value} is : {ret}")   
    
if __name__=="__main__":
    main()