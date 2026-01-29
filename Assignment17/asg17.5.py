#5.Write a program which accept one number for user and check whether number is prime or not.
# Input : 5 Output : It is Prime Number 

    
def ChkPrime(No):
    flag = True
    for i in range(2,No):
        if No % i == 0:
            flag = False
            break
    return flag
        
def main():
    
    print("Enter Number :")
    Value = int(input())
    
    ret = ChkPrime(Value) 
    
    if ret == True:
        print(f"{Value} is Prime")
    else:
        print(f"{Value} is not Prime")   
    
if __name__=="__main__":
    main()