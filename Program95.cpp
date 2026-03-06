// outside class Function define kele ani inside class declare kele

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;

class DoublyCLL
{
    private:
        PNODE first;
        PNODE last;
        int iCount;

    public:
        DoublyCLL();

        void Display();
        int Count();

        void InsertFirst(int);
        void InsertLast(int);
        void InsertAtPos(int,int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);
};

DoublyCLL :: DoublyCLL() // Constructor
{
    first = NULL;
    last = NULL;
    iCount = 0;
}

void DoublyCLL :: InsertFirst(int No)
{
    PNODE newn = NULL;
    newn = new NODE;

    newn->next = NULL;
    newn->prev = NULL;
    newn->data = No;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        first->prev = newn;
        first = newn;
    }

    last->next = first; //
    first->prev = last; //  Comman ahe he sgle tyamule baher kadle
    iCount++;           //
}

void DoublyCLL :: InsertLast(int No)
{
    PNODE newn = NULL;
    newn = new NODE;

    newn->next = NULL;
    newn->prev = NULL;
    newn->data = No;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        last->next = newn;
        newn->prev = last;

        last = newn;
    }

    last->next = first; //
    first->prev = last; //  Comman ahe he sgle tyamule baher kadle
    iCount++;           //
}

void DoublyCLL :: Display()
{
    PNODE Temp = first;
    cout<<"Elements of the LinkedList are : \n";

    if(first == NULL && last == NULL)
    {
        return;
    }

    do
    {
        cout<<"| "<< Temp->data <<" | <=> ";
        Temp = Temp->next;
    }while(Temp != first);

}

int main()
{
    DoublyCLL dobj;

    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);

    dobj.InsertLast(101);
    dobj.InsertLast(111);
    dobj.InsertLast(121);

    dobj.Display();

    return 0;
}