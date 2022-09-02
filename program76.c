//Display how many times the number has occured
#include<stdio.h>
#include<stdlib.h>
// POSITIVE & NEGATIVE

int Frequency(int Arr[],int iLength,int iNo)
{
    int iCnt = 0,iFrequency = 0;
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(iNo == Arr[iCnt])
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{
    int iSize =0, iRet = 0, iCnt = 0, iValue = 0;
    int *ptr = NULL;

    printf("Enter the number of elements:\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);


    printf("Enter the values:\n");
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Enter the element to calculate frequency:\n");
    scanf("%d",&iValue);

    iRet = Frequency(ptr,iSize,iValue);
    printf("Frequency is : %d\n",iRet);
   

    free(ptr);

    return 0;
}