//  ACCEPT STRING FROM USER AND compare  the strings and display if true or false. //    CASE SENSITIVE

#include<iostream>
using namespace std;

bool strcmpX(char *src, char *dest)
{
    while((*src != '\0') && (*dest != '\0'))
    {
        if(*src != *dest)
        {
            break;
        }
        *src++;
        *dest++;
    }
    if((*src == '\0') && (*dest == '\0'))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char Arr[100]; 
    char Brr[100] ;   
    bool bRet;

    cout<<"Enter  first String "<<endl;
    cin.getline(Arr,100);
    
    cout<<"Enter  second String "<<endl;
    cin.getline(Brr,100);

    bRet = strcmpX(Arr,Brr);

    if(bRet == true)
    {
        cout<<"Strings are equal"<<endl;
    }
    else
    {
        cout<<"Strings are not equal"<<endl;
    }
    
    return 0;
}