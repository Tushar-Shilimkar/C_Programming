///////////////////////////////////////////////////////////////////////
//
//  Header File Inclusion
//
//////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////////
//
//  User Defined Macros
//
//////////////////////////////////////////////////////////////////////

#define MAXINODE 10
#define MAXFILESIZE 50
#define MAXOPENFILES 10

#define READ 1
#define WRITE 2
#define EXECUTE 4

#define START 0
#define CURRENT 1
#define END 2

#define EXECUTE_SUCCESS 0

#define REGULARFILE 1
#define SPECIALFILE 1

///////////////////////////////////////////////////////////////////////
//
//  User Defined Macros for ERROR Handling
//
//////////////////////////////////////////////////////////////////////

#define ERR_INVALID_PARAMETER -1

#define ERR_NO_INODES -2

#define ERR_FILE_ALREADY_EXIST -3
#define ERR_FILE_NOT_EXIST -4

#define ERR_PERMISSION_DENIED -5

#define ERR_INSUFFICIENT_SPACE -6
#define ERR_INSUFFICIENT_DATA -7

#define ERR_MAX_FILE_OPEN -8

//////////////////////////////////////////////////////////////////////   
//
//  Structure Name :    Boot Block
//  Description :       It Holds the information to boot
//                      the operating system
//
//////////////////////////////////////////////////////////////////////  

struct BootBlock
{
    char Information[100];
};

//////////////////////////////////////////////////////////////////////   
//
//  Structure Name :    Super Block
//  Description :       It holds the information of  
//                      Complete File System
//
////////////////////////////////////////////////////////////////////// 

struct SuperBlock
{
    int TotalInodes;
    int FreeInodes;
};

//////////////////////////////////////////////////////////////////////   
//
//  Structure Name :    Inode
//  Description :       It holds the information of FIle
//
////////////////////////////////////////////////////////////////////// 

#pragma pack(1)
struct Inode
{
    char FileName[20];
    int InodeNumber;
    int FileSize;
    int ActualFileSize;
    int FileType;
    int ReferenceCount;
    int Permission;
    int *Buffer;
    struct Inode *next;    
};

typedef struct Inode INODE;
typedef struct Inode* PINODE;
typedef struct Inode** PPINODE;

//////////////////////////////////////////////////////////////////////   
//
//  Structure Name :    FileTable
//  Description :       It holds the information of opened files
//
////////////////////////////////////////////////////////////////////// 

#pragma pack(1)
struct FileTable
{
    int ReadOffset;
    int WriteOffset;
    int Mode;
    PINODE ptrinode;
};

typedef struct FileTable FILETABLE;
typedef struct FileTable* PFILETABLE;

//////////////////////////////////////////////////////////////////////   
//
//  Structure Name :    UAREA
//  Description :       It holds the information of process
//
////////////////////////////////////////////////////////////////////// 

struct UAREA
{
    char ProcessName[20];
    PFILETABLE UFDT[MAXOPENFILES];
};

///////////////////////////////////////////////////////////////////////
//
//  Global Variables used in the Project
//
///////////////////////////////////////////////////////////////////////

struct BootBlock bootobj;
struct SuperBlock superobj;
struct UAREA uareaobj;

PINODE head = NULL;

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     InitialiseUAREA 
//  Description :       It is used to initialise UAREA
//  Author :            Tushar Vijay Shilimkar
//  Date :              31/07/2026
//
///////////////////////////////////////////////////////////////////////

void InitialiseUAREA()
{
    int i = 0;

    strcpy(uareaobj.ProcessName, "Myexe");

    for(i = 0; i < MAXOPENFILES; i++)
    {
        uareaobj.UFDT[i] = NULL;
    }

    printf("Marvellous CVFS : UAREA gets initialised Succesfully\n");

}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     InitialiseSuperBlock()
//  Description :       It is used to initialise super block
//  Author :            Tushar Vijay Shilimkar
//  Date :              31/07/2026
//
///////////////////////////////////////////////////////////////////////

void InitialiseSuperBlock()
{
    superobj.TotalInodes = MAXINODE;
    superobj.FreeInodes = MAXINODE;

    printf("Marvellous CVFS : Super Block gets initialised Succesfully\n");
}

///////////////////////////////////////////////////////////////////////
//
//  Function Name :     CreateDILB()
//  Description :       It is used to create Linked list of inodes
//  Author :            Tushar Vijay Shilimkar
//  Date :              31/07/2026
//
///////////////////////////////////////////////////////////////////////

void CreateDILB()
{
    PINODE temp = NULL;
    PINODE newn = NULL;

    int i = 0;

    temp = head;

    for(i = 1; i <= MAXINODE; i++)
    {
        newn = (PINODE)malloc(sizeof(INODE));
        newn -> InodeNumber = i;

        if(temp == NULL)
        {
            head = newn;
            temp = head;
        }
        else
        {
            temp->next = newn;
            temp = temp->next;
        }
    }

    printf("Marvellous CVFS : DILB gets created Succesfully\n");
}

///////////////////////////////////////////////////////////////////////
//
//  Entry Point Function of the CVFS Project
//
//////////////////////////////////////////////////////////////////////   

int main()
{
    InitialiseUAREA();

    InitialiseSuperBlock();

    CreateDILB();

    


    return 0;
}