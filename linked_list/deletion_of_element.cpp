#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    // creating a constructor
    node(int data)
    {
        this->data = data;
        this->next = next;
    }

    // destructor
    ~node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for the node with data:  " <<value<< endl;
    }
};

void InsertAtHead(node *&head, int d)
{
    // new node create
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}

void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtTail(node *&tail, int d)
{
    // new node create
    node *temp = new node(d);
    tail->next = temp;
    tail = temp;
}

// insertion at any position
void insertatposition(node *&tail, node *&head, int position, int d)
{
    // insertion at start
    if (position == 1)
    {
        InsertAtHead(head, d);
        return;
    }

    node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // insertion at the last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    // creating a node for d
    node *nodetoinsert = new node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}

// deletion at any position
void deleteNode(int position, node *&head)
{
    // deletion of the first node
    if (position == 1)
    {
        node *temp = head;
        head = head->next;
        // free memory at the starting node
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting the middle or the last node
        node *curr = head;
        node *prev = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    // created a node
    node *node1 = new node(120);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // head pointed at node1
    node *head = node1;
    node *tail = node1;
    // print(head);

    insertAtTail(tail, 12);
    // print(head);

    insertAtTail(tail, 15);
    // print(head);

    insertatposition(tail, head, 3, 44);
    // print(head);

    deleteNode(3,head);
    print(head);

    return 0;
}