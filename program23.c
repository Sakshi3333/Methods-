// ACCEPT NUMBER FROM USER AND CHECK WHETHER IT IS EVEN OR ODDD
#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    if((iNo % 2) == 0)
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
        printf("%d is even number", iValue);
    }
    else
    {
        printf("%d is odd number", iValue);
    }
    return 0;

}
