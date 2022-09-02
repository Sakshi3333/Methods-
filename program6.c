

#include<stdio.h>

//////////////////////////////////////////////////////////
//
// FUNCTION NAME: ADDITION
// DESCRIPTION : USED TO PERFORM ADDITION OF 2 NUMBERS
// INPUT: INTEGER,INTEGER
// OUTPUT: INTEGER
// DATE : 12/04/2022
// AUTHOR : SAKSHI SAMPAT SHINDE
//
//////////////////////////////////////////////////////////

int Addition(int iValue1, int iValue2)
{
    int iAns = 0;
    iAns = iValue1 + iValue2;
    return iAns;

}
//////////////////////////////////////////////////////////
//WRITE PROGRAM TO PERFORM ADDITION OF 2 NUMBERS
//////////////////////////////////////////////////////////

int main()   // ENTRY POINT FUNCTION
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iNo3 = 0;

    
    printf("Enter first number:\n");
    scanf("%d",&iNo1);

    printf("Enter second number:\n");
    scanf("%d",&iNo2);

    iNo3 = Addition(iNo1,iNo2);
    printf("Addition is : %d\n",iNo3);

    return 0; //CONVEYING OS APPLICATION RUNNING SUCESSFULLY
}

///////////////////////////////////////////////////////////
//
// INPUT : 11 10
//OUTPUT : 21
//
//////////////////////////////////////////////////////////