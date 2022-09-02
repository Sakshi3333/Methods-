#include<iostream>
using namespace std;

int strlenX(char str[])
{
    int iCnt = 0;
    
    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;

}
int main()
{
    char Arr[100]; 
    int iRet = 0;

    cout<<"Enter String "<<endl;
    cin.getline(Arr,100);
    
    iRet = strlenX(Arr);
    cout<<"String length is : "<<iRet<<endl;
    
    
    return 0;
}