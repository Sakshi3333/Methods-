// ACCEPT NUMBER AND DISPLAY ASSITION OF NUMBERS:

#include<iostream>

using namespace std;

class ArrayX
{
    private:
       int *Arr;
       int iSize;
       int iCnt = 0;

    public:
       ArrayX(int iValue)                 // PARAMETRISED CONSTRUCTOR
       {
           this->iSize = iValue;
           Arr = new int[iSize];         // RESOURCE
       }

       ~ArrayX()                          // DESTRUCTOR
       {
           delete []Arr;                // DEALLOCATE THE RESOURCE
       }

       void Accept()
       {
           int iCnt = 0;
           cout<<"Enter the elements"<<endl;
            for(iCnt = 0;iCnt < iSize; iCnt++)
            {
                cin>>Arr[iCnt];
            }
       }

       void Display()
       {
           cout<<"Elements of array are"<<endl;
           for(iCnt = 0; iCnt < iSize;iCnt++)
           {
               cout<<Arr[iCnt]<<endl;
           }
       }
       int Sumation()
       {
           int iSum = 0, iCnt = 0;
           for(iCnt = 0; iCnt < iSize; iCnt++)
           {
               iSum = iSum + Arr[iCnt];
           }
           return iSum;
        }
};
int main()
{
    int iRet = 0;
    ArrayX obj1(5);
    obj1.Accept();
    obj1.Display();

    iRet = obj1.Sumation();

    cout<<"Addition is :"<<iRet<<endl;
    return 0;
}