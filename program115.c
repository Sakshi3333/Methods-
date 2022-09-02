#include<stdio.h>
#include<stdlib.h>

//  STRUCTURE DECLARATION
struct node
{
    int data;
    struct node *next;
};

int main()
{
  // STATIC MEMORY ALLOCATION
    struct node obj;


//    DYNAMIC MEMORY ALLOCATION
    struct node *ptr = (struct node*)malloc(sizeof(struct node));

    obj.data = 11;  // DIRECT ACCESSING OPERATOR
    obj.next = NULL;


    ptr -> data = 11;     // INDIRECT ACCESSING OPERATOR ->
    ptr -> next = NULL;


    return 0;
}