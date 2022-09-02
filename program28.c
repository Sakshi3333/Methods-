// ACCEPT NUMBER FROM USER AND DISPLAY ITS FACTORS
// INPUT :10,9,17,20,-20
//OUTPUT: 1 2 5,1 3 ,1, 1 2 4 5 10, 1 2 4 5 10

#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1;iCnt < iNo;iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);
    return 0;
}


// TIME COMPLEXITY = O(N)
