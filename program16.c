//PROGRAM TO RETURN HELLO 5 TIMES ON SCREEN

#include<stdio.h>

//DEMOSTRATION OF ITERATION

void Display(int iNo)    // DEFINITION
{
    int iCnt = 0;
    if(iNo < 0)   //FILTER
    {
        printf("Please enter positive value\n");
        return;
    }
   
    for(iCnt = 0; iCnt<iNo; ++iCnt)
    {
        printf("Hello\n");   
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    Display(iValue);  // FUNCTION CALL
    
    return 0;
}