#include<stdio.h>
#include<stdlib.h>

//  STRUCTURE DECLARATION
struct node
{
    int data;   // 4
    struct node *next;  // 8
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;
int main()
{
  // STATIC MEMORY ALLOCATION
    NODE obj;


//    DYNAMIC MEMORY ALLOCATION
    PNODE ptr = (PNODE)malloc(sizeof(NODE));

    obj.data = 11;  // DIRECT ACCESSING OPERATOR
    obj.next = NULL;


    ptr -> data = 11;     // INDIRECT ACCESSING OPERATOR ->
    ptr -> next = NULL;


    return 0;
}