// INPUT : 4
// OUTPUT : 1 2 3 4 4 3 2 1


#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt<=iNo; iCnt++)  //SEQUENTIAL LOOP
    {
        printf("%d\t",iCnt);
    }
    for(iCnt = iNo; iCnt >= 1; iCnt--) // SEQUENTIAL LOOP
    {
        printf("%d\t",iCnt);
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

// TIME COMPLEXITY = O(2N)