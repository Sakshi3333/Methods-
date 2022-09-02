// INPUT : 5
// OUTPUT : * * * * *

#include<stdio.h>


void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        printf("*\t");
    }
}
int main()
{
    int iValue = 0;

    printf("enter number:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

// TIME COMPLEXITY = O(N)