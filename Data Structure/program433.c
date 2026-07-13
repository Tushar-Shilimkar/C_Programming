// Doubly Circular LL

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node* next;
    struct node* prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE first, PNODE last)
{}

int Count(PNODE first, PNODE last, int iNo)
{
    return 0;
}

void InsetFirst(PPNODE first, PPNODE last, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(*first == NULL && *last == NULL)
    {
        *first = newn;
        *last = newn;
    }
    else
    {
        newn->next = *first;
        (*first)->prev = newn;
        *first = newn;
    }

    (*last)->next = *first;
    (*first)->prev = *last;
}

void InsetLast(PPNODE first, PPNODE last, int iNo)
{
        PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(*first == NULL && *last == NULL)
    {
        *first = newn;
        *last = newn;
    }
    else
    {
        
    }

    (*last)->next = *first;
    (*first)->prev = *last;
}

void InsetAtPos(PPNODE first, PPNODE last, int iNo, int iPos)
{}

void DeleteFirst(PPNODE first, PPNODE last)
{}

void DeleteLast(PPNODE first, PPNODE last)
{}

void DeleteAtPos(PPNODE first, PPNODE last, int iPos)
{}


int main()
{   
    PNODE head = NULL;
    PNODE tail = NULL;

    InsetFirst(&head, &tail, 51);
    InsetFirst(&head, &tail, 21);
    InsetFirst(&head, &tail, 11);


    return 0;
}