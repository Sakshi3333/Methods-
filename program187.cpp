//  ACCEPT STRING FROM USER AND copy that in other string  

#include<iostream>
using namespace std;

void strcpyX(char *src, char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        *src++;
        *dest++;
    }
    *dest = '\0';
    
}
int main()
{
    char Arr[100];  // BHARLELI BOOK
    char Brr[100] ;   // RIKAMI BOOK
    

    cout<<"Enter String "<<endl;
    cin.getline(Arr,100);
    
    strcpyX(Arr,Brr);

    cout<<"String after COPYING:"<<Brr<<endl;
    
    
    return 0;
}