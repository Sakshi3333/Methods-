#include<iostream>
using namespace std;

int main()
{
    int num;
    cout <<"Enter number";
    cin>>num;

    if((num%3 == 0) && (num%5 == 0))
        cout<<num<<"is divisible number by 3 & 5";
    else
        cout<<num<<"is not divisible by 3 & 5";



    return 0;
}