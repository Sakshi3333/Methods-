// ACCEPT NUMBER FROM USER AND RETURN FACTORIAL 
#include<iostream>
using namespace std;

// 4
// 4*3*2*1 = 24
// 1*2*3*4 = 24

class Number
{
    private:
        int iNo;        // CHARACTERISTICS

    public:
 // BEHAVIOURS
    void Accept()          // SETTER
    {
        cout<<"Enter the value:"<<endl;
        cin>>this->iNo;
    }

    void Display()          // GETTER
    {
        cout<<"VALUE IS:"<<this->iNo<<endl;
    }
    int Factorial()
    {
        int iFact = 1;
        int iCnt = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iFact *= iCnt;//iFact  = iFact * iCnt;
        }
        return iFact;
    }
};
int main()
{
    Number nobj;
    int iRet = 0;

    //cout<<nobj.iNo; error

    nobj.Accept();
    nobj.Display();

    iRet = nobj.Factorial();

    cout<<"Factorial is :"<<iRet<<endl;

    return 0;
}