#include<stdio.h>

int Power(int iNo1, int iNo2)
{
    int iMult = 1;
    register int iCnt = 0;
    
    for(iCnt = 1;iCnt<=iNo2;iCnt++)
    {
        iMult = iMult * iNo1;
    }
    return iMult;
}
int main()
{
    auto int iValue1 = 0; int iValue2 = 0;
    auto int iRet = 0;

    printf("enter base:\n");
    scanf("%d",&iValue1);

    printf("enter power:\n");
    scanf("%d",&iValue2);

    iRet = Power(iValue1,iValue2);
    printf("Result is %d\n",iRet);

    return 0;
}