/*
0 -35 = fail
35 - 50 = pass class
50 - 60 = second class
60 - 70 = first class
70 - 100 = first class with distinction
*/

#include<iostream>
using namespace std;

int main()
{
    int percent;
    cout<<"Enter percent\n";
    cin>>percent;

    if((percent > 0) && (percent < 35.0))
    {
        cout<<"You are failed\n";
    }

    else if((percent > 35.0) && (percent < 50.0))
    {
        cout<<"pass class\n";
    }

    else if((percent > 50.0) && (percent < 60.0))
    {
        cout<<"second class\n";
    }

    else if((percent > 60.0) && (percent < 70.0))
    {
        cout<<"first class\n";
    }

    else if((percent > 70.0) && (percent < 100.0))
    {
        cout<<"first class with distinction\n";
    }
    
    


    return 0;
}