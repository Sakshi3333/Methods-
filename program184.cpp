//  ACCEPT STRING FROM USER AND Convert  lower to upper case in string   


#include<iostream>
using namespace std;

void struprX(char str[])
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;      
    }
}
int main()
{
    char Arr[100]; 
    

    cout<<"Enter String "<<endl;
    cin.getline(Arr,100);
    
    struprX(Arr);

    cout<<"String in upper case:"<<Arr<<endl;
    
    
    return 0;
}