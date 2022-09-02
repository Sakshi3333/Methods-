// multilevel inheritance

#include<iostream>
using namespace std;

class Base
{
    public:
       int i,j;
       Base()
       {
        cout<<"Base constructor\n";
       }
       ~Base()
       {
        cout<<"Base destructor\n";
       }
};

class Derived:public Base
{
    public:
       int a,b,c;
       Derived()
       {
        cout<<"Inside derived constructor\n";
       }
       ~Derived()
       {
        cout<<"Inside derived destructor\n";
       }
};

class Derived1:public Derived
{
    public:
       int k,l;
       Derived1()
       {
        cout<<"Derived 1 constructor\n";
       }
       ~Derived1()
       {
        cout<<"Derived 1 destructor\n";
       }
};

int main()
{
    Derived1 dobj;
    return 0;
}