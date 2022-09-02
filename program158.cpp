#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node **PPNODE;

class SinglyCLL
{
    private :              // CHARACTERISTICS
        PNODE Head;
        PNODE Tail;

    public:                  // BEHAVIOURS
    SinglyCLL();
    void InsertFirst(int no);
    void InsertLast(int no);
    void InsertAtPos(int no,int pos);
    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int ipos);
    void Display();
    int Count();

};

SinglyCLL::SinglyCLL()
{
    Head = NULL;
    Tail = NULL;
}

void SinglyCLL::InsertFirst(int no)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn ->data = no;
    newn ->next = NULL;

    if((Head == NULL) && (Tail == NULL))  // IF LL IS EMPTY
    {
        Head = newn;
        Tail = newn;
    }
    else // IF LL CONTAINS ATLEAST ONE NODE
    {
        newn -> next = Head;
        Head = newn;
    }
    Tail -> next = Head;
}
void SinglyCLL::InsertLast(int no)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn ->data = no;
    newn ->next = NULL;

    if((Head == NULL) && (Tail == NULL))  // IF LL IS EMPTY
    {
        Head = newn;
        Tail = newn;
    }
    else // IF LL CONTAINS ATLEAST ONE NODE
    {
        Tail -> next = newn;
        Tail = newn;
    }
    Tail -> next = Head;
}
void SinglyCLL::InsertAtPos(int no,int pos)
{}
void SinglyCLL::DeleteFirst()
{
    if(Head == NULL && Tail ==NULL)  // IF LL IS EMPTY
    {
        return;
    }
    else if(Head == Tail)   // IF LL CONTAINS 1 NODE
    {
        delete Head;
        Head = NULL;
        Tail = NULL;
    }
    else // IF LL CONTAINS MORE THAN 1 NODE
    {
        Head = Head -> next;
        delete Tail-> next;
        Tail -> next = Head;
    }
}
void SinglyCLL::DeleteLast()
{
    if(Head == NULL && Tail ==NULL)  // IF LL IS EMPTY
    {
        return;
    }
    else if(Head == Tail)   // IF LL CONTAINS 1 NODE
    {
        delete Tail;
        Head = NULL;
        Tail = NULL;
    }
    else // IF LL CONTAINS MORE THAN 1 NODE
    {
        PNODE temp = Head;
        while(temp ->next != Tail)
        {
            temp = temp ->next;
        }

        delete Tail;
        Tail = temp;

        Tail ->next = Head;
    }
}
void SinglyCLL::DeleteAtPos(int ipos)
{}
void SinglyCLL::Display()
{
    PNODE temp = Head;

    if(Head == NULL && Tail == NULL)     // IF LL IS EMPTY
    {
        return;
    }
    do
    {
        cout<<"|"<<temp->data<<"|->";
        temp = temp -> next;
    }
    while(temp != Tail ->next);
    
    cout<<endl;
}
int SinglyCLL::Count()
{
    int iCnt = 0;
    PNODE temp = Head;

    if(Head == NULL && Tail == NULL)
    {   
    return 0;
    }
    do
    {
        iCnt++;
        temp = temp ->next;
    }while(temp!= Head);
    return iCnt;
}
int main()
{
    int iRet = 0;
    SinglyCLL obj;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);
    obj.InsertLast(151);
    obj.InsertLast(201);

    obj.Display();
    iRet = obj.Count();

    cout<<"Number of nodes are :"<<iRet<<endl;

    obj.DeleteFirst();
    obj.DeleteLast();

    obj.Display();
    iRet = obj.Count();

    cout<<"Number of nodes are :"<<iRet<<endl;

    return 0;
}