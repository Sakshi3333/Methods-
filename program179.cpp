//  ACCEPT STRING FROM USER AND COUNT NO OF small ALPHABETS FROM STRING.   // USING ASCII VALUESs

#include<iostream>
using namespace std;

int CountSmall(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str >= 97) && (*str <= 122))
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
    
    iRet = CountSmall(Arr);
    cout<<"Number of capital characters are:"<<iRet<<endl;
    
    
    return 0;
}