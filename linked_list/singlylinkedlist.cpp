#include <iostream>
using namespace std;
class node
{
private:
    int data;
    node *next;

public:
    // creating a constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    void printdata()
    {
        cout << this->data << endl;
        cout << this->next;
    }
    void addnode()
    {
    }
    void deletenode()
    {
    }
};

int main()
{
    node *node1 = new node(100);
    // node1->data = 10;
    // node1->next = NULL;
    // cout << node1->data << endl;
    // cout << node1->next << endl;
    node1->printdata();
}