// INPUT  ROW = 4  COLUMNS = 4
// OUTPUT =   1 1 1 1 
//            2 2 2 2
//            3 3 3 3
//            4 4 4 4

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1;i<= iRow; i++)
    {
        for(j = 1;j<=iCol;j++)
        {
            printf("%d\t",i);
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows:");
    scanf("%d",&iValue1);

    printf("enter the number of coulmns:");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}

// TIME COMPLEXITY = N^2