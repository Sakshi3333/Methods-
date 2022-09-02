//PROGRAM TO RETURN HELLO 5 TIMES ON SCREEN

#include<stdio.h>

//DEMOSTRATION OF ITERATION

void Display()    // DEFINITION
{
    int iCnt = 0;
   /* printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");*/

    // 1 INITIALIZATION
    // 2 CONDITION
    // 3 DISPLACEMENT
    // 4 LOOP BODY

   //         1        2      3
    for(iCnt = 1; iCnt<=5; iCnt++)
    {
        printf("Hello\n");   // 4
    }
}
// 1
// 2 4 3
// 2 4 3
// 2 4 3
// 2 4 3 
// 2 4 3
// 2
int main()
{
    Display();  // FUNCTION CALL
    
    return 0;
}

