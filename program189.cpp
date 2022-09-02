//  ACCEPT STRING FROM USER AND concatenate the strings

#include<iostream>
using namespace std;

void strcatX(char *src, char *dest)
{
    while(*src != '\0')
    {
        *src++;
    }
    while(*dest != '\0')
    {
        *src = *dest;
        *src++;
        *dest++;
    }
    *src = '\0';
    
}
int main()
{
    char Arr[100];  // BHARLELI BOOK
    char Brr[100] ;   // RIKAMI BOOK
    

    cout<<"Enter  first String "<<endl;
    cin.getline(Arr,100);
    
    cout<<"Enter  second String "<<endl;
    cin.getline(Brr,100);

    strcatX(Arr,Brr);

    cout<<"String after concatenation: "<<Arr<<endl;
    
    
    return 0;
}