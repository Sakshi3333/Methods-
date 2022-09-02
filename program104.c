// INPUT = ROW 4 COL 4
/*
OUTPUT = 
a  b  c  d
a  b  c  d
a  b  c  d
a  b  c  d

*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j= 0;
    char ch = '\0';

    if(iRow != iCol)
    {
        printf("Invalid Input");
        return;
    }

    for(i = 1; i<= iRow; i++)
    {
        for(j = 1,ch ='a'; j<= iCol; j++, ch++)
        {
            printf("%c\t",ch);
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows:");
    scanf("%d",&iValue1);

    printf("Enter number of columns:");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}