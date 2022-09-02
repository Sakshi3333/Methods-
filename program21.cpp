#include<iostream>
using namespace std;

class Base
{
    public:
       int x,y;

       void fun()               // concrete non virtual function
       {
        cout<<"Base fun\n";
       }

       virtual void gun()       // concrete virtual function
       {
        cout<<"Base gun\n";
       }

       virtual void sun()         // concrete virtual function
       {
        cout<<"Base sun\n";
       }

       virtual void run() = 0;  // abstract function
};

class Derived:public Base
{
    public:
       int i,j;

       void fun()                    // Redefinition(concrete)function
       {
        cout<<"Derived fun\n";
       }

       virtual void gun()            // Overriding
       {
        cout<<"Derived gun\n";
       }

       void run()                // Concrete function
       {
        cout<<"Derived run\n";
       }
};

int main()
{
    //Base bobj;
    Derived dobj;

    Base *bp = NULL;
    bp = &dobj;

    cout<<sizeof(Base)<<"\n";
    cout<<sizeof(Derived)<<"\n";

    bp->fun();          // Base fun
    bp->gun();          // Derived gun
    bp->sun();          // Base sun
    bp->run();           // Derived run

    return 0;

}