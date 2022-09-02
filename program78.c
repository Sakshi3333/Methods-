#include<stdio.h>
#include<stdlib.h>


bool Search(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
   
   for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    if(iCnt == iLength)
    {
        return false;
    }
    else
    {
        return true;
    }
}
int main()
{
    int iSize =0,iCnt = 0,iValue = 0;
    int *ptr = NULL;
    bool bRet;

    printf("Enter the number of elements:\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(sizeof(int) * iSize);
    
    printf("Enter the values:\n");
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the element to search:\n");
    scanf("%d",&iValue);

    bRet = Search(ptr,iSize,iValue);
    if(bRet == true)
    {
        printf("element is there in array");
    }
    else
    {
        printf("Element is not there in array");
    }

    free(ptr);

    return 0;
}