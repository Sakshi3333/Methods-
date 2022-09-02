#include<stdio.h>
#include<stdlib.h>

//  STRUCTURE DECLARATION
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE; ////////////////////////////////////////////////////////////////
int main()
{
   // STATIC MEMORY ALLOCATION
    NODE obj;


    // DYNAMIC MEMORY ALLOCATION
    NODE *ptr = (NODE*)malloc(sizeof(NODE));

    obj.data = 11;  // DIRECT ACCESSING OPERATOR
    obj.next = NULL;


    ptr -> data = 11;     // INDIRECT ACCESSING OPERATOR ->
    ptr -> next = NULL;


    return 0;
}