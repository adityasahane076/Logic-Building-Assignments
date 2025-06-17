#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    char Fname[] = {'\0'};
    int fd = 0;

    printf("Enter file name\n");
    scanf("%s",Fname);
    
    fd = creat(Fname,0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
        return -1;
    }
    else
    {
        printf("File created successfully\n");
        
        close(fd);
    }

    return 0;
}