#include<stdio.h>
#include<stdlib.h>

int SearchFirstOccurence(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
   
   for(iCnt = iLength-1; iCnt >=0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
        return iCnt;
    
}
int main()
{
    int iSize =0,iCnt = 0,iValue = 0;
    int *ptr = NULL;
    int iRet;

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

    iRet = SearchFirstOccurence(ptr,iSize,iValue);
    if(iRet == -1)
    {
        printf("there is no such element in array");
    }
    else
    {
        printf("Element last occured at:%d\n",iRet);
    }

    free(ptr);

    return 0;

}