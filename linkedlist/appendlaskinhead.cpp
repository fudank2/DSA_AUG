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
        next = NULL;
    }
};

void insertdata(node *&head, int val)
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
}

void printdata(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int length(node*head)
{
    node*temp = head;
    int i =0;
    while(temp != NULL)
    {
        temp = temp ->next;
        i++;
    }
    return i;
}
/* node*lAppend(node*&head, int k)
{
    int l = length(head);
    int pos = l-k;
    int i;
    node *temp = head;
    node*posk;
    node*pos0;
    while(temp->next != NULL)
    {
        if(i == pos)
        {
            posk = temp->next;
            pos0 = temp->next->next;
        }
        temp = temp->next;
        i++;
    }
    temp->next = head;
    posk->next = NULL;
    pos0->next = head;
    return pos0->next;
} */
node* kappend(node*&head, int k)
{
    node*newhead;
    node*newtail;
    node*temp = head;
    int l = length(head);
    int count = 1;
    while(temp->next != NULL)
    {
        if(count == l-k)
        {
            newtail = temp;
        }
        if(count == l-k-1)
        {
            newhead = temp;
        }
        temp = temp->next;
        count++;
    }
    newtail ->next= NULL;
    temp->next = head;
    return newhead;
    
    
}
 
int main()
{
    node*head = NULL;
    insertdata(head,7);
    insertdata(head,17);
    insertdata(head,71);
    insertdata(head,72);
    printdata(head);
    cout<<endl;
    printdata(kappend(head,2));
    cout<<endl;
    printdata(kappend(head,2));
    
    return 0;
}