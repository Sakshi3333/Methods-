#include<stdio.h>   // FOR PRINTF,SCANF
#include<stdlib.h>   // FOR MALLOC(),FREE()

int CountEven(int Arr[],int iLength)
{
   int iCnt = 0;
   int iEvenCnt = 0;

   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
       if((Arr[iCnt] % 2) == 0)
       {
           iEvenCnt++;
       }
   }
   return iEvenCnt;
}
int main()
{
    int iSize = 0;
    int iRet = 0;
    int iCnt = 0;
    int *ptr = NULL;  // GOOD PRACTICE TO AVOID RUNTIME ERROR

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int)); // MEMORY ALLOCATED
    
    printf("Enter the values of array:\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }


    iRet = CountEven(ptr, iSize);
    printf("number of even elements  are : %d\n",iRet);

    free(ptr);

    return 0;
}