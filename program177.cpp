//  ACCEPT STRING FROM USER AND COUNT NO OF CAPITAL ALPHABETS FROM STRING.   // USING ASCII VALUESs

#include<iostream>
using namespace std;

int CountCapital(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 65) && (*str <= 90))
        {
            iCnt++;
        }
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
    
    iRet = CountCapital(Arr);
    cout<<"Number of capital characters are:"<<iRet<<endl;
    
    
    return 0;
}