#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;  // 4
    struct node *next;  // 8
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head,int no)
{
    // ALLOCATE MEMORY FOR NODE
    // INITIALISE THAT NODE

    // CHECK WHETHER LL IS EMPTY  OR NOT
    // IF LL IS EMPTY THEN NEW NODE IS THE FIRST NODE SO UPDATE ITS ADDRESS IN FIRST POINTER THROUGH HEAD

    // IF LL IS NOT EMPTY THEN STORE THE ADDRESS OF FIRST NODE IN THE NEXT POINTER OF OUR NEW NODE
    // UPDATE THE FIRST POINTER THROUGH HEAD
    PNODE  newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));  // newn  = (struct node *)malloc(12);

    newn->data = no;
    newn->next = NULL;

    if(*head == NULL) // IF LL IS EMPTY
    {
        *head = newn;
    }
    else    // LL CONTAINS ATLEAST ONE NODE
    {
        newn->next = *head;
        *head = newn;
    }
}

void InsertLast(PPNODE head,int no)
{
    // ALLOCATE MEMORY FOR NODE(DYNAMICALLY)
    // INITIALISE THAT NODE

    // CHECK WHETHER LL IS EMPTY  OR NOT
    // IF LL IS EMPTY THEN NEW NODE IS THE FIRST NODE SO UPDATE ITS ADDRESS IN FIRST POINTER THROUGH HEAD

    // IF LL IS NOT EMPTY THEN 
    // TRAVEL TILL LAST NODE OF LL
    // STORE ADDRESS OF NEW NODE IN THE NEXT POINTER OF LAST NODE

    PNODE  newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));  // newn  = (struct node *)malloc(12);

    newn->data = no;
    newn->next = NULL;

    if(*head == NULL) // IF LL IS EMPTY
    {
        *head = newn;
    }
    else    // LL CONTAINS ATLEAST ONE NODE
    {
        temp = *head;
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
     
     // travel till last node 
     // store address of new node in the next pointer of last node
    }
}

void Display(PNODE head)
{
    printf("Elements from linked list are:\n");

    while(head != NULL)
    {
        printf("| %d|->",head->data);
        head = head -> next;
    }
    printf("NULL\n");
}

int Count(PNODE head)
{
    int iCnt = 0;

    while(head != NULL)
    {
        iCnt++;
        head = head -> next;
    }
    return iCnt;
}

void DeleteFirst(PPNODE head)
{
    // IF LL IS EMPTY THEN RETURN
    // IF LL CONTAINS ATLEAST ONE NODE THEN 
    // STORE THE ADDRESS OF SECOND NODE IN THE FIRST POINTER THROUGH HEAD
    // AND DELETE THE FIRST NODE

    PNODE temp = NULL;

    if(*head == NULL)  // LL IS EMPTY
    {
        return;
    }
    else  // LL CONTAINS ATLEAST ONE NODE
    {
        temp = *head;
        *head = temp -> next;
        free(temp);
    }
}

void DeleteLast(PPNODE head)
{
    //IF LL IS EMPTY THEN RETURN
    //IF LL CONTAINS ONE NODE THEN DELETE THAT NODE AND RETURN
    //IF LL CONTAINS MORE THAN ONE NODE THEN TRAVEL TILL SECOND LAST NODE AND DELETE LAST NODE

    PNODE temp = NULL;
    if(*head == NULL) // LL is empty
    {
        return;
    }
    else if((*head)->next == NULL)// LL CONTAINS ONE NODE
    {
        free(*head);
        *head = NULL;
    }
    else // LL CONTAINS MORE THAN ONE NODE
    {
        temp = *head;
        while(temp->next->next != NULL)
        {
            temp = temp -> next;
        }

        free(temp->next);
        temp->next = NULL;
    }    
}

void InsertAtPos(PPNODE head, int no,int pos)
{
    //CONSIDER NUMBER OF NODES ARE 4

    //IF POSITION IS INVALID THEN RETURN DIRECTLY(< 1 OR > 5)
    //IF POSITION IS 1 THEN CALL INSERTFIRST
    //IF POSITION IS N+1 THEN CALL INSERTLAST(POSITION IS 5)

    int size = 0, iCnt = 0;
    PNODE  newn = NULL;
    PNODE temp = NULL;

    size = Count(*head);

    if((pos < 1) || (pos >(size + 1)))
    {
        printf("Invalid Position\n");
        return;
    }

    if(pos == 1)
    {
        InsertFirst(head,no);
    }
    else if(pos == (size+1))
    {
        InsertLast(head,no);
    }
    else
    {
        PNODE  newn = NULL;
        newn = (PNODE)malloc(sizeof(NODE));  // newn  = (struct node *)malloc(12);
        newn->data = no;
        newn->next = NULL;

        temp = *head;

        for(iCnt = 1; iCnt < pos-1 ;iCnt++)
        {
            temp = temp -> next;
        }
        newn -> next = temp -> next;
        temp ->next = newn;
    }
}

void DeleteAtPos(PPNODE head, int pos)
{
    //CONSIDER NUMBER OF NODES ARE 4

    //IF POSITION IS INVALID THEN RETURN DIRECTLY(< 1 OR > 4)
    //IF POSITION IS 1 THEN DELETE FIRST
    //IF POSITION IS N THEN CALL DELETE LAST(POSITION IS 4)

    int size = 0, iCnt = 0;
    PNODE temp = NULL;
    PNODE tempdelete = NULL;

    size = Count(*head);

    if((pos < 1) || (pos >(size)))
    {
        printf("Invalid Position\n");
        return;
    }

    if(pos == 1)
    {
        DeleteFirst(head);
    }
    else if(pos == (size))
    {
        DeleteLast(head);
    }
    else
    {

        temp = *head;

        for(iCnt = 1; iCnt < pos-1 ;iCnt++)
        {
            temp = temp -> next;
        }

        tempdelete = temp->next;
        temp-> next  = temp -> next->next;
        free(tempdelete);
    }

}
int main()
{
    int iRet  = 0;
    PNODE first = NULL;

    InsertFirst(&first,101);  // CALL BY ADDRESS
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    InsertAtPos(&first,75,3);
    DeleteAtPos(&first,3);
    

    Display(first);  // CALL BY VALUE
    iRet = Count(first);
    printf("Number of nodes are:%d\n",iRet);

    InsertFirst(&first,1);

    Display(first);  // CALL BY VALUE
    iRet = Count(first);
    printf("Number of nodes are:%d\n",iRet);

    InsertLast(&first,111);
    InsertLast(&first,121);

    Display(first);  // CALL BY VALUE
    iRet = Count(first);
    printf("Number of nodes are:%d\n",iRet);

    DeleteFirst(&first);
    DeleteFirst(&first);

    Display(first);
    iRet = Count(first);
    printf("Number of nodes are:%d\n",iRet);

    DeleteLast(&first);

    Display(first);
    iRet = Count(first);
    printf("Number of nodes are:%d\n",iRet);

    return 0;
}