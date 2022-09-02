#include<iostream>
using namespace std;

class Demo
{
    public:
       int i,j ;
       static int x;

       Demo()
       {
        cout<<"Inside default constructor\n";
        i = 10;j = 20;
       }
};

int Demo ::x = 30;  // Static characteristics,1 \
int main()
{
    Demo();
    cout<<Demo::x<<"\n";
    return 0;
}