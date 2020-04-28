#include <iostream>

using namespace std;

class node
{
    public:
    int data;
    node* next;
    node(int d)
    {
        data=d;
        next=NULL;
    }
};

void InsertAtEnd(node* &head,int d)
{
    node* temp=new node(d);
    if(head==NULL)
    {
        head=temp;
        return;
    }
    node* last_Ptr=head;
    while(last_Ptr->next!=NULL)
    {
        last_Ptr=last_Ptr->next;
    }
    last_Ptr->next=temp;
}

void PrintLL(node* head)
{
    while(head!=0)
    {
        cout<<head->data<<" ";
        head=head->next;
        
    }
}

void Delete(node* &head,int a)
{
    if(head==NULL)
    {
        return;
    }
    node* temp=head;
    if(a==0)
    {
        temp=head;
        head=head->next;
        delete temp;
        return;
    }
    node* temp2;
    for(int i=0;i<a-1;i++)
    {
        temp=temp->next;
    }
    temp2=temp->next;
    temp->next=temp2->next;
    delete temp2;
    return;
}

int main()
{
    node* head=NULL;
    int N,Q,V;
    cin>>N>>Q;
    while(N--)
    {
        cin>>V;
        InsertAtEnd(head,V);
    }
    while(Q--)
    {
    cin>>V;
    Delete(head,V);
    PrintLL(head);
    }
    return 0;
}
