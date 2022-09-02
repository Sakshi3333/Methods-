// SINGLY LINEAR LINKED LIST
/*
   INSERT FIRST
   INSERT LAST
   INSERTATPOSITION

   DELETEFIRST
   DELETELAST
   DELETEATPOSITION

   DISPLAY
   COUNT

*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

/*
1] ALLOCATE MEMORY FOR NODE
2]INITIALISE THE NODE
3]CHECK WHETHER LL IS EMPTY OR NOT
4]IF THE LL IS EMPTY  THE NEW NODE IS THE FIRST NODE
5]IF LL CONTAINS ATLEAST ONE NODE IN IT THEN STORE THE ADDRESS OF PREVIOUS FIRST NODE IN THE NEXT POINTER OF NEW NODE.


*/

void InsertFirst(PPNODE Head, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = iNo;
    newn->next = NULL;

    if(*Head == NULL)  // IF LL IS EMPTY.
    {
        *Head = newn;
    }
    else  // IF LL CONTAINS ATLEAST ONE NODE.
    {
        newn -> next = *Head;
        *Head = newn;
    }

}
int main()
{
    PNODE First = NULL;

    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);


    return 0;
}

// RULES
/*
1)USE ONLY  DYNAMIC MEMORY ALLOCATION.
2)DON'T WRITE ANY TECHNICAL SYNTAX IN MAIN.
3)DONT'T USE ANY GLOBAL VARIABLES.
4)BE CAREFUL WHILE MANIPULATING FIRST POINTER.
5)PASS THE FIRST POINTER DIRECTLY IF THE FUNCTION IS NOT GOING TO MODIFY THE LL.(DISPLAY,COUNT).
6)PASS THE ADDRESS OF FIRST POINTER IF THE FUNCTION IS GOING MODIFY THE LL.(InsertFirst, InsertLast,InsertAtPosition,....)

*/
