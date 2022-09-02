//  ACCEPT STRING FROM USER AND reverse the string  

#include<iostream>
using namespace std;

void strrevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp ;


    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start  = *end;
        *end = temp;

        start++;
        end--;

    }
}
int main()
{
    char Arr[100]; 
    

    cout<<"Enter String "<<endl;
    cin.getline(Arr,100);
    
    strrevX(Arr);

    cout<<"String after reverse:"<<Arr<<endl;
    
    
    return 0;
}