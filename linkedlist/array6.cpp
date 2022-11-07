#include <iostream>
using namespace std;
// deletion of element in linked list;
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
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// delecting element of linked list;
void deletion(node *&head, int val)
{
    node *temp = head;
    

    while (temp->next->data != val)
    {
        if (temp->data == val)
        {
            head = temp->next;
            delete temp;
            return;
        }
        if(temp->next->data == val)
        {
            node* ldel = temp->next;
            temp->next = NULL;
            delete ldel;
        }


        temp = temp->next;
    }
    node *delt = temp->next;
    temp->next = temp->next->next;
    delete delt;
}

int main()
{
    node *head = NULL;
    insertatTail(head, 66);
    insertatTail(head, 266);
    insertatTail(head, 296);
    insertatTail(head, 196);
    insertatTail(head, 81);
    insertatTail(head, 22);
    //search(head,2906);
    display(head);
    cout << endl;
    deletion(head, 22);
    display(head);
    return 0;
}