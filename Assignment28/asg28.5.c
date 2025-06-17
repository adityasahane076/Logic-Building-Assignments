#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

int main()
{
    char Fname[30] = {'\0'};
    int fd = 0,iRet = 0,iSum = 0;
    char Buffer[] = "Hello World";

    printf("Enter file name\n");
    scanf("%s",Fname);
    
    fd = open(Fname,O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    else
    {

       iRet = write(fd,Buffer,strlen(Buffer));

       printf("Write %s at the end of %s file",Buffer,Fname);
       close(fd);
    }

    return 0;
}