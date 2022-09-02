/*
0 -35 = fail
35 - 50 = pass class
50 - 60 = second class
60 - 70 = first class
70 - 100 = first class with distinction
*/



#include<stdio.h>

void DisplayClass(float fMarks)
{
    if((fMarks > 0) && (fMarks < 35.0))
    {
        printf("You are failed\n");
    }
    else if((fMarks >= 35) && (fMarks < 50.0))
    {
        printf("Pass class\n");
    }
    else if((fMarks >= 50.0) && (fMarks < 60.0))
    {
        printf("Second class\n");
    }
    else if((fMarks >= 60.0) && (fMarks < 70.0))
    {
        printf("first class\n");
    }
    else if((fMarks >= 70.0) && (fMarks <= 100.0))
    {
        printf("first class with distinction\n");
    }

}
int main()
{
    float fValue = 0.0;

    printf("Enter the percentage\n");
    scanf("%f",&fValue);

    DisplayClass(fValue);

    return 0;
}