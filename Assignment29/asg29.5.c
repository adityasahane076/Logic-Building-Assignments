#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

void Display(char Fname[],int count)
{
    int fd = 0,iRet = 0;
    char Buffer[1024] = {'\0'};
   
    
    fd = open(Fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return ;
    }
    else
    {
        iRet = read(fd,Buffer,count);
        
        printf("First 12 Characters are : %s",Buffer);
        close(fd);
    }

}
int main()
{
    char FileName[30] = {'\0'};
    int iValue = 0;

    printf("Enter file name\n");
    scanf("%s",FileName);

    printf("Enter number of Character\n");
    scanf(" %d",&iValue);

    Display(FileName,iValue);


    return 0;
}