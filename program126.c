#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;     // *
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE head,int no)
{

}

int Count(PPNODE head, int no)
{
    return 0 ;
}

void InsertFirst(PPNODE head, int no)
{

}

void InserrtLast(PPNODE head, int no)
{

}

void DeleteFirst(PPNODE head)
{

}

void DeleteLast(PPNODE head)
{

}

void InsertAtPos(PPNODE head,int no,int pos)
{

}

void DeleteAtPos(PPNODE head, int pos)
{

}
int main()
{

    PNODE first = NULL;
    return 0;
}