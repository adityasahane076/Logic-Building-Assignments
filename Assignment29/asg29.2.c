#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

int CountSmall(char Fname[])
{
    int fd = 0,iRet = 0,iCnt = 0,iCount = 0;
    char Buffer[1024] = {'\0'};
   
    
    fd = open(Fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    else
    {

        while((iRet = read(fd,Buffer,10)) != 0)
        {
            for(iCnt = 0; iCnt < iRet ; iCnt++)
            {
                if((Buffer[iCnt] >= 'a') && (Buffer[iCnt] <= 'z'))
                {
                    iCount++;
                }
            }
        }

        close(fd);
    }

    return iCount;
}
int main()
{
    char FileName[30] = {'\0'};
    int iRet = 0;

    printf("Enter file name\n");
    scanf("%s",FileName);

    iRet = CountSmall(FileName);

    printf("Number of Small Characters are %d ",iRet);

    return 0;
}