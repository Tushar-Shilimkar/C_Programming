#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>      // Only LINUX based os
#include<string.h>
#include<sys/stat.h>

#define BUFFER_SIZE 1024

void CalculateFileInformation(char FileName[])
{
    struct stat sobj;

    stat(FileName, &sobj);

    printf("File Name : %s\n",FileName);
    printf("Inode Number : %llu\n",sobj.st_ino);
    // printf("Block Size : %d\n",sobj.st_blksize);
    printf("File Size : %lld\n",(long long) sobj.st_size);
}

int main()
{ 
    char Fname[30] = {'\0'};  

    printf("Enter the file name : \n");
    scanf("%[^'\n]s",Fname);

    CalculateFileInformation(Fname);

    return 0;
}