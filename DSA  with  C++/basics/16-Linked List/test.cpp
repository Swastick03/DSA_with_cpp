#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free for : " << value << endl;
    }
};

void insertnode(Node *&tail, int element, int d)
{
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        temp->next = tail;
    }
    else
    {
        Node *temp = tail;
        while (temp->data != element)
        {
            temp = temp->next;
        }
        Node *t = new Node(d);
        t->next = temp->next;
        temp->next = t;
    }
}

void deletenode(Node *&tail, int element)
{
    if (tail == NULL)
    {
        cout << "Empty!" << endl;
    }
    else
    {
        Node *prev = tail
    }
}
int main()

{

    return 0;
}