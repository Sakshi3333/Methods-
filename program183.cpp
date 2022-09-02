//  ACCEPT STRING FROM USER AND Convert Upper to lower case in string   


#include<iostream>
using namespace std;

void strlwrX(char str[])
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;      
    }
}
int main()
{
    char Arr[100]; 
    

    cout<<"Enter String "<<endl;
    cin.getline(Arr,100);
    
    strlwrX(Arr);

    cout<<"String in lower case:"<<Arr<<endl;
    
    
    return 0;
}