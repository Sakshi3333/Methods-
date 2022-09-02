// Display maximum number 
#include<stdio.h>
#include<stdlib.h>
// POSITIVE & NEGATIVE
int Maximum(int Arr[], int iLength)
{
    int iMax = Arr[0];
    int iCnt = 0;
    
    for(iCnt = 0; iCnt < iLength;iCnt++)
    {
        if(iMax < Arr[iCnt])
        {
            iMax  = Arr[iCnt];
        }
    }
    return iMax;

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
    iRet = Maximum(ptr,iSize);
    printf("Maximum number is : %d\n",iRet);

    free(ptr);

    return 0;
}