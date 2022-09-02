#include<iostream>
using namespace std;

void Display(char str[])
{
    
    while(*str != '\0')
    {
        cout<<*str<<endl;
        str++;
    }

}
int main()
{
    char Arr[] = "SHREE GANESHAYA NAMAH";
    Display(Arr);
    
    
    return 0;
}