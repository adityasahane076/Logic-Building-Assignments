#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
int main()
{
    char Fname[30] = {'\0'};
    int fd = 0,iRet = 0;
    char Buffer[] = {'\0'};

    printf("Enter file name\n");
    scanf("%s",Fname);
    
    fd = open(Fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to create file\n");
        return -1;
    }
    else
    {

        while(iRet = read(fd,Buffer,10) != 0)
        {
            printf("%s",Buffer);
            memset(Buffer,'\0',10);
        }

        close(fd);
    }

    return 0;
}