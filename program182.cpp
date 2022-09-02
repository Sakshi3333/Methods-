//  ACCEPT STRING FROM USER AND COUNT NO OF vowelsin CAPITAL FROM STRING.   
//  CASE INSENSITIVE

#include<iostream>
using namespace std;

int Count(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if((*str =='A')||(*str =='E')||(*str =='I')||(*str =='O')||(*str =='U')||(*str =='a')||(*str =='e')||(*str =='i')||(*str =='o')||(*str =='u'))
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
    
    iRet = Count(Arr);
    cout<<"Number of vowels  are:"<<iRet<<endl;
    
    
    return 0;
}