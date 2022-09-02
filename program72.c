// ADDITION OF N NUMBERS = PROBLEM STATEMENT.
#include<stdio.h>
#include<stdlib.h>

int SummationNumber(int Arr[], int iLength)
{
    int iSum = 0, iCnt = 0;
    for(iCnt = 0; iCnt <= iLength;iCnt++)
    {
        iSum = iSum + Arr[iCnt];

    }
    return iSum;
}

int main()
{
    int iSize =0, iRet = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter the number of elements:\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);


    printf("Enter the values:\n");
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet = SummationNumber(ptr,iSize);
    printf("Summation is : %d",iRet);

    free(ptr);

    return 0;
}