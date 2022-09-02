#include<stdio.h>

unsigned long int Power(int iNo1, int iNo2)
{
    unsigned long int iMult = 1;
    register int iCnt = 0;
    
    for(iCnt = 1;iCnt<=iNo2;iCnt++)
    {
        iMult = iMult * iNo1;
    }
    return iMult;
}
int main()
{
    auto int iValue1 = 0, iValue2 = 0;
    auto unsigned long int lRet = 0;

    printf("enter base:\n");
    scanf("%d",&iValue1);

    printf("enter power:\n");
    scanf("%d",&iValue2);

    lRet = Power(iValue1,iValue2);
    printf("Result is %ld\n",lRet);

    return 0;
}