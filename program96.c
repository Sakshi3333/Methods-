// INPUT ROWS 4 COL 4
// OUTPUT 
/*
$  *   *  *
#  $  *   *
#  #  $  *
#  #  #  $
*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    if(iRow != iCol)     //  FILTER
    {
        printf("Invalid Input\n");
        return;
    }

    for(i = 1;i<= iRow; i++)
    {
        for(j = 1;j<=iCol;j++)
        {
            if(i  > j) 
            {
                printf("*\t");
            }
            else if(i < j)
            {
                printf("#\t");
            }
            else if(i == j)
            {
                printf("$\t");
            }
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