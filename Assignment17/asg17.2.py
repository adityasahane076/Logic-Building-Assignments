#2. Write a program which accept one number and display below pattern.
# Input : 5
# Output :
# * * * * *
# * * * * *
# * * * * *
# * * * * *
# * * * * * 
    
def Display(No):
    for i in range(No):
        print("*\t"*No)
        
def main():
    
    print("Enter Number :")
    Value = int(input())
    
    Display(Value)    
    
if __name__=="__main__":
    main()