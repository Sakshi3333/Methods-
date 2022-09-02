
/*
START
accept number from user as No
check whether the number is not negative or not if negative then convert it to positive

create one variable as SUM and set it to 0
create one variable as Cnt and det it to 1

Iterate till Cnt is less than or equal to No
Add the value of Cnt into the variable SUM
Incremnt the value of Cnt by 1
Loop

Display the value of SUM
END
*/

#include<stdio.h>

int Summation(int iNo)
{
    int iSum = 0;

    int iCnt = 0;
    

    if(iNo < 0)
    {
        iNo = -iNo;

    }

    for(iCnt = 1; iCnt<=iNo; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;

}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    iRet = Summation(iValue);
    printf("Summation is :%d\n", iRet);

    return 0;
}


