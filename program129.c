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

void Display(PNODE head)
{
    printf("Data from linked list is :\n");

    while(head != NULL)
    {
        printf("|%d|<=>",head->data);
        head = head-> next;
    }
    printf("NULL\n");
}

int Count(PPNODE head)
{
    int iCnt = 0;

    while(head != NULL)
    {
        iCnt++;
        head = head-> next;
    }
    return iCnt ;
}

void InsertFirst(PPNODE head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    
    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;      // *

    if(*head == NULL)   // IF LL IS EMPTY
    {
        *head = newn ;
    }
    else              // IF LL CONTAINS ATLEAST ONE NODE
    {
        newn -> next = *head;
        (*head) -> prev = newn;  // *
        *head = newn;

    }

}

void InserrtLast(PPNODE head, int no)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    
    newn -> data = no;
    newn -> next = NULL;
    newn -> prev = NULL;      // *

    if(*head == NULL)   // IF LL IS EMPTY
    {
        *head = newn ;
    }
    else              // IF LL CONTAINS ATLEAST ONE NODE
    {
        temp = *head;

        while(temp -> next != NULL)
        {
            temp = temp-> next;
        }

        temp -> next = newn;
        newn -> prev = temp;    // *

    }


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