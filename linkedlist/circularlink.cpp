#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next =  NULL;
    }
};

void insertatTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;

        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}

void display(node *head)
{
    node *temp = head;
    node*last = head;
    
    do
    {
        cout << temp->data<<"->";
        temp = temp->next;
    }while (temp != head);
}



int main()
{
    node*head= NULL;
    insertatTail(head,78);
    insertatTail(head,178);
    insertatTail(head,71);
    insertatTail(head,72);
    insertatTail(head,58);
    cout<<" w2k";
    display(head);
    return 0;
}