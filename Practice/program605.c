#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>      // Only LINUX based os
#include<string.h>
#define BUFFER_SIZE 1024

// change in parameter (* / [])
int CountCapital(char *FileName)
{
    char Buffer[BUFFER_SIZE] = {'\0'};

    int iRet = 0, fd = 0, iCount = 0, i = 0;

    fd = open(FileName, O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }

    while((iRet = read(fd, Buffer, sizeof(Buffer))) != 0)
    {
        while (Buffer[i] != '\0')           // using while loop
        {
            if(Buffer[i] >= 'A' && Buffer[i] <= 'Z')
            {
                iCount++;
            }
            i++;
        }
        
        memset(Buffer, '\0', sizeof(Buffer));
    }
    close(fd);

    return iCount;
}

int main()
{
    
    char Fname[30] = {'\0'};
    int iRet = 0;    

    printf("Enter the file name : \n");
    scanf("%[^'\n]s",Fname);

    iRet = CountCapital(Fname);

    printf("Capital Letters are : %d\n",iRet);


    return 0;
}