// protected acess specifiers
#include<iostream>
using namespace std;

class Demo
{
    public:
       int i;
    private:
       int j;
    protected:
       int k;
};
class Hello: public Demo
{
    public:
       int x;
    private:
       int y;
    protected:
       int z;
    public:
       void fun()
       {
        //cout<<k<<"\n";
       }
};
int main()
{
    cout<<sizeof(Demo)<<"\n";
    cout<<sizeof(Hello)<<"\n";
    Demo dobj;
    cout<<dobj.i<<"\n";
    //cout<<dobj.j;
    //cout<<dobj.k;
    Hello hobj;
    cout<<hobj.x<<"\n";
    //cout<<hobj.y;
    //cout<<hobj.z;
    cout<<hobj.i<<"\n";
    //cout<<hobj.j;
    //i0cout<<hobj.k;
    hobj.fun();
    return 0;

}

