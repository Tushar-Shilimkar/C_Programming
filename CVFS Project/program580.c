#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>      // Only LINUX based os
#include<string.h>

int main()
{
    int fd = 0;             // file descriptor
    int iRet = 0;
    char Data[] = "Marvellous Infosystems";

    fd = open("Marvellous.txt", O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File gets succesfully opened with fd : %d\n", fd);

        iRet = write(fd,Data,strlen(Data));

        printf("%d bytes get succesfully written \n", iRet);

        close(fd);
    }

    return 0;
}