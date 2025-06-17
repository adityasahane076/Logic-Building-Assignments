#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

int main()
{
    char Fname[30] = {'\0'};
    int fd = 0,iRet = 0,iSum = 0;
    char Buffer[1024] = {'\0'};

    printf("Enter file name\n");
    scanf("%s",Fname);
    
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
            iSum = iSum + iRet;
        }

        printf("The file is of %d bytes",iSum);
        close(fd);
    }

    return 0;
}