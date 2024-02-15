#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node* next;
 
    // creating a constructor
    node(int data)
    {
        this->data = data;
        this->next = next;
    }
};

void insertAtTail(node* &tail, int d){
    //new node create
    node* temp = new node(d);
    tail ->next = temp;
    tail = temp;

}

void InsertAtHead(node* &head, int d)
{
    // new node create
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}


// insertion at any position
void insertatposition(node* &tail, node* &head, int position , int d){
    //insertion at start
    if (position == 1)
    {
        InsertAtHead(head, d);
        return;
    }
    

    node* temp = head;
    int cnt = 1;
    while (cnt < position-1)
    {
        temp = temp->next;
        cnt++;
    }

    //insertion at the last position
    if (temp->next == NULL)
    {
        insertAtTail(tail , d);
        return;
    }
    
    //creating a node for d
    node* nodetoinsert= new node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
    
}


void print(node* &head)
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
    // created a node
    node *node1 = new node(120);
    //cout << node1->data << endl;
    //cout << node1->next << endl;

    // head pointed at node1
    node* head = node1;
    node* tail = node1;
    // print(head); 

    insertAtTail(tail, 12);
    // print(head);

    insertAtTail(tail, 15);
    // print(head);

    insertatposition(tail, head, 3 , 44);
    print(head);

    return 0;
}