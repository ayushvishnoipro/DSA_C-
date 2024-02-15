#include <iostream>
using namespace std;

class node
{

public:
    int data;
    node* next;


    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertnode(node* &head, int d)
{
    // creation of new node
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}

void printdata(node* head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    node *node1 = new node(100);

    node *head = node1;

    insertnode(head, 200);
    printdata(head);

    //    node1->data = 10;
    //  node1->next = NULL;

    return 0;
}