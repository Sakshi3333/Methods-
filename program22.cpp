#include<iostream>
using namespace std;

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

    cout<<"Enter the number\n";
    cin>>iValue;

    iRet = Summation(iValue);
    cout<<"Summation is :"<<iRet;

    return 0;

}