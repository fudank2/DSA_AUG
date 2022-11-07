#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertData(Node*&head,int val)
{
    Node*n = new Node(val);
    if(head==NULL)
    {
        head = n;
        return;
    }
    Node*temp = head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void printdata(Node*head)
{
    Node*temp = head;
    if(head==NULL)
    {
        cout<<"No any Data is exist";
    }
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void insetatHead(Node*&head,int val)
{
    Node*n = new Node(val);
    if(head ==NULL)
    {
        head = n;
    }
    n->next = head;
    head = n;
}

void insertatmid(Node*&head , int index,int val)
{
    Node*n = new Node(val);
    if(head==NULL)
    {
        n = head;
    }
    Node*temp = head;
    while(index != 0 ||temp->next !=NULL)
    {
        index--;
        temp = temp->next;
    }
    cout<<temp->data<<index; 
}

int main()
{
    Node*head = NULL;
    insertData(head,93);
    insertData(head,1);
    insertData(head,93);
    insertData(head,4);
    insertData(head,75);
    insertData(head,55);
    printdata(head);
    insetatHead(head,771);
    printdata(head);
    insertatmid(head,3,66);
    return 0;
}