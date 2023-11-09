#include <iostream>

using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory free for: " << value << endl;
    }
};

void insertnode(Node *&tail, int element, int d)
{
    // for empty
    if (tail == NULL)
    {
        Node *temp = new Node(d);
        tail = temp;
        temp->next = tail;
    }
    else
    {
        Node *cur = tail;
        while (cur->data != element)
        {
            cur = cur->next;
        }
        Node *temp = new Node(d);
        temp->next = cur->next;
        cur->next = temp;
    }
}

void deletenode(Node *&tail, int value)
{
    if (tail == NULL)
    {
        cout << "The linked list is empty !!" << endl;
    }
    else
    {
        Node *prev = tail;
        Node *cur = prev->next;
        while (cur->data != value)
        {
            prev = cur;
            cur = cur->next;
        }
        prev->next = cur->next;
        if (prev == cur)
        {
            tail = NULL;
        }
        else if (tail == cur)
        {
            tail = prev;
        }

        cur->next = NULL;
        delete cur;
    }
}

void print(Node *&tail)
{
    if (tail == NULL)
    {
        cout << "List is Empty" << endl;
        return;
    }

    Node *temp = tail;
    do
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    } while (temp != tail);
    cout << endl;
}
int main()

{
    Node *tail = NULL;
    insertnode(tail, 5, 3);
    print(tail);
    insertnode(tail, 3, 5);
    print(tail);
    // insertnode(tail, 5, 9);
    // print(tail);
    // insertnode(tail, 3, 9);
    // print(tail);

    deletenode(tail, 3);
    print(tail);

    cout << "tail: " << tail->data << endl;
    return 0;
}