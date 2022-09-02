// program to check whteher number is divisible by 3 & 5

#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    if((iNo % 3) == 0 && ((iNo % 5) == 0))
    { 
        return true;
    }
    else 
    {
        return false;

    }

}
int main()
{
    int iValue = 0;
    bool bRet = false;
    
    printf("enter number\n");
    scanf("%d", &iValue);

    bRet = CheckEven(iValue);
    if(bRet == true)
    {
        printf("%d is divisible number by 3 & 5", iValue);
    }
    else
    {
        printf("%d is not divisible number by 3 & 5", iValue);
    }
    return 0;

}