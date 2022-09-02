/* Function overloading = were we can define it as more than one function 
in a single class with more than one function in a single class with same name but with different prototype.

Name mangling = naming decoration
                the name of the functions gets automatically changed by the compiler to avoid ambiguity problem.
*/
#include<iostream>
using namespace std;

class Demo
{
    public:
       int Addition(int no1,int no2)
       {
        int ans = 0;
        ans = no1+no2;
        return ans;
       }

       int Addition(int no1,int no2,int no3)
       {
        int ans = 0;
        ans = no1+no2+no3;
        return ans;
       }

       int Addition(int no1,int no2,int no3,int no4)
       {
        int ans = 0;
        ans = no1+no2+no3+no4;
        return ans;
       }
};

int main()
{
    Demo obj;
    int ret = 0;

    ret = obj.Addition(10,11);
    cout<<ret<<"\n";

    ret = obj.Addition(10,11,21);
    cout<<ret<<"\n";

    ret = obj.Addition(10,11,51,21);
    cout<<ret<<"\n";

    return 0;
}