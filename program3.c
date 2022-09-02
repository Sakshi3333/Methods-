//WRITE PROGRAM TO PERFORM ADDITION OF 2 NUMBERS

#include<stdio.h>
int main()   // ENTRY POINT FUNCTION
{
    int i = 10;
    int j = 11;
    int k = 0;

    
    printf("Enter first number:\n");
    scanf("%d",&i);

    printf("Enter second number:\n");
    scanf("%d",&j);

    k = i + j;

    printf("Addition is : %d\n",k);

    return 0; //CONVEYING OS APPLICATION RUNNING SUCESSFULLY
}